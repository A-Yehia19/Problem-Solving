#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n,dev,sok,ans=0;
    vector <int> msh;
    scanf("%d%d%d",&n,&dev,&sok);
    for(int i=0 ; i<n ; i++){
        int k;
        scanf("%d",&k);
        msh.push_back(k);
    }
    sort(msh.begin(), msh.end(), greater<int>());
    for (int i=0 ; i<n ; i++){
        if(dev<=sok){
            printf("%d",ans);
            return 0;
        }else if(sok>0){
            sok--;
            ans++;
            dev-=msh[i];
        }else if(sok==0 && dev>0){
            ans++;
            dev-=msh[i]-1;
        }
        if(dev<=sok){
            printf("%d",ans);
            return 0;
        }
    }
    printf("-1");
}

