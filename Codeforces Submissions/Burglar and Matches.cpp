#include<stdio.h>
#include<algorithm>
#include<utility>
#include<functional>

using namespace std;

int main(){
    int capacity, n;
    pair<int,int> in[20];
    int ans = 0;
    scanf("%d%d",&capacity,&n);
    for(int i=0; i<n; i++){
        int boxes, matches;
        pair<int,int> tmp;
        scanf("%d%d",&boxes,&matches);
        tmp.first=matches;
        tmp.second=boxes;
        in[i]=tmp;
    }
    sort(in,in+n, greater<pair<int,int>>());
    
    for(int i=0; i<n && capacity;i++){
        int amount = min(capacity,in[i].second); // to get the amount of boxes to add in the bag
        capacity-=amount;                        // it garantee that either the container is emptied or capacity is full 
        ans+=amount*in[i].first;
    }
    printf("%d",ans);
}

