//#include<ctype.h>
//#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){
    int n[5][5],ans=0,xp,yp;
    for(int x=0 ; x<5 ; x++){
        for(int y=0 ; y<5 ; y++){
            scanf("%d",&n[x][y]);
            if(n[x][y]==1){
                xp=x;
                yp=y;
            }
        }
    }
    ans+=abs(xp-2);
    ans+=abs(yp-2);
    printf("%d",ans);
}
