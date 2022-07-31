#include<stdio.h>
#include<cstdlib>
int main(){
    int t,h,m,ans;
    scanf("%d",&t);
    while (t>0){
        scanf("%d",&h);
        scanf("%d",&m);
        ans = (abs(23-h))*60+(abs(60-m));
        printf("%d\n",ans);
        t--;
    }
}
