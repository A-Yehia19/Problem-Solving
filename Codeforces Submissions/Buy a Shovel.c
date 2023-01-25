#include<stdio.h>

int main(){
    int price,r;
    int ans;
    scanf("%d%d",&price,&r);
    for(ans=1; ans<=10; ans++){
        if(ans*price % 10 == 0 || ans*price %10 == r)
            break;
    }
    printf("%d",ans);
}

