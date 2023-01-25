#include <bits/stdc++.h>
 
using namespace std;

int main(){
	int h,w,waste,q;
	vector<int> waste_idx;
	scanf("%d%d%d%d",&h,&w,&waste,&q);
	
	for (int i=0; i < waste; i++){
		int x,y;
		scanf("%d%d",&x,&y);
		waste_idx.push_back(y+(x-1)*w);
	}

    sort(waste_idx.begin(),waste_idx.end());

    for (;q--;){
		int x,y;
		scanf("%d%d",&x,&y);
        // get location of fields with fruit in case of no waste
		// then subtract the number of waste before it
        // mod the result by 3 to iterate between the fruits
        int idx = y+(x-1)*w;

        int num_of_wastes = lower_bound(waste_idx.begin(),waste_idx.end(), idx)-waste_idx.begin();
        if(idx == waste_idx[num_of_wastes])
            printf("Waste\n");
        else{
            int res = idx-num_of_wastes-1;
            res = res%3;
            if(res == 0)
                printf("Carrots\n");
            if(res == 1)
                printf("Kiwis\n");
            if(res == 2)
                printf("Grapes\n");
        }
	}
}
// 0 -> Carrots
// 1 -> Kiwis
// 2 -> Grapes