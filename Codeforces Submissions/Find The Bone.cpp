#include <bits/stdc++.h>

using namespace std;
 
int main(){
	int n,h,steps;
	unordered_map <int,int> holes;
	scanf("%d%d%d",&n,&h,&steps);

	bool fallen = false;
	int idx=1; // bone location

	for (int i = 0; i < h; i++){
		int tmp;
		scanf("%d",&tmp);
		holes[tmp]=1;
	}

	for (;steps--;){
		int x,y;
		scanf("%d%d",&x,&y);
		if(!fallen){
			if(holes[idx]==1){
				fallen=true;
				continue;
			}
			if(idx==x)
				idx = y;
			else if (idx==y)
				idx=x;
		}
	}
	printf("%d",idx);
}