#include<stdio.h>

int main(){
    int len,a,b,c;
    scanf("%d",&len);
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int ans=0;
    for (int x=0 ; x<len ; x++){
        for (int y=0 ; y<len ; y++){
            int z=(len-x*a-y*b)/c;
            if (len-x*a-y*b>=0 && (len-x*a-y*b)%c==0){
                if (ans<x+y+z){
                    ans=x+y+z;
                }
            }
        }
    }
    printf("%d",ans);
}
