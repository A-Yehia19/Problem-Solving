#include <stdio.h>

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,c,a,b,i;
    scanf("%d",&c);
    for(i=1;i<=3;i++){
        scanf("%d%d",&b,&a);
        if(c==b){
            c=a;
        }else if(c==a){
                c=b;
        }
    }
    printf("%d",c);
}
