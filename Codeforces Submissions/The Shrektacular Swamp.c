//#include<unistd.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
#include<stdio.h>

int main(){
    int n,x[4],y[4],bx=-10000,by=-10000,sx=10000,sy=10000;
    scanf("%d",&n);
    for(int i=0 ; i<4 ; i++){
        scanf("%d%d",&x[i],&y[i]);
        if(x[i]>bx)
            bx=x[i];
        if(x[i]<sx)
            sx=x[i];
        if(y[i]>by)
            by=y[i];
        if(y[i]<sy)
            sy=y[i];
    }
    for(int i=0 ; i<n ; i++){
        int xi,yi;
        scanf("%d%d",&xi,&yi);
        if (xi<=bx && xi>=sx && yi<=by && yi>=sy){
            printf("What are you doing in my swamp?\n");
        }else{
            printf("E\n");
        }
    }
}
