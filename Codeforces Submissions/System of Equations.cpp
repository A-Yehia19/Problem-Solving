#include<stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int s=0;
    for (int a=0 ; a<=n+m ; a++){
        for (int b=0 ; b<=n+m ; b++){
            if (a*a+b==n && a+b*b==m){
                s=s+1;
            }
        }
    }
    printf("%d",s);
}
