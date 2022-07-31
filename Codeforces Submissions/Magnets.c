#include<stdio.h>

int main(){
    int n,ans=0,last=0;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        int now;
        scanf("%d",&now);
        if(now != last){
            last=now;
            ans++;
        }
    }
    printf("%d",ans);
}
