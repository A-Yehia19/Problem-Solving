#include <bits/stdc++.h>
 
using namespace std;
void generate(int x_start, int y_start, int x_end, int y_end);
 
vector<pair<int,int>> general; // vector contain points of generals <x,y>
int main(){
	int x_start, x_end;
	int y_start, y_end;
	int r;
	scanf("%d%d%d%d",&x_start, &y_start, &x_end, &y_end);
 
	if(min(x_start,x_end)==x_end)
		swap(x_start,x_end);
	if(min(y_start,y_end)==y_end)
		swap(y_start,y_end);
 
	generate(x_start,y_start,x_end,y_end);
 
	scanf("%d",&r);
	for (int k = 0; k < r; k++){
		int x,y,rad;
		scanf("%d%d%d",&x,&y,&rad);
		vector<int> idx_of_generals_to_delete;
 
		// check distance betweeen radiator and each general
		for (int i = 0; i < general.size(); i++){
			int diffx = x-general[i].first;
			int diffy = y-general[i].second;
			double dist = sqrt( diffx*diffx + diffy*diffy);
			if(dist <= rad)
				idx_of_generals_to_delete.push_back(i);
		}
 
		// delete warm up generals
		for (int i = idx_of_generals_to_delete.size()-1; i >= 0; i--)
			general.erase(general.begin()+idx_of_generals_to_delete[i]);
	}
	
	printf("%d",general.size());
}
 
// generate positions of generals
void generate(int x_start, int y_start, int x_end, int y_end){
	for (int y = y_start; y <= y_end; y++){
		general.push_back(make_pair(x_start,y));
		general.push_back(make_pair(x_end,y));
	}

	for (int x = x_start+1; x < x_end; x++){
		general.push_back(make_pair(x,y_start));
		general.push_back(make_pair(x,y_end));
	}
}
/*
// table:
 
g g g g g
g    r  g
g  r    g
g    r  g
g g g g g
*/