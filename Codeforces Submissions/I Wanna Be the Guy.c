//#include<unistd.h>
//#include<cctype>
//#include<string.h>
//#include<math.h>
#include<stdio.h>

int main(void){
    int n;
    bool cond=true;
    scanf("%d",&n);
    int x[101];
    int y[101];
    int l;
    scanf("%d",&l);
    for (int i=0 ; i<l ; i++){
        int k;
        scanf("%d",&k);
        x[k]=k;
    }
    scanf("%d",&l);
    for (int i=0 ; i<l ; i++){
        int k;
        scanf("%d",&k);
        x[k]=k;
    }

    //////////////////////////////////////////////////////////////////////////////////////////
    for(int i=1 ; i<=n ; i++){
        if(i!=x[i] && i!=y[i]){cond=false;}
    }
    //////////////////////////////////////////////////////////////////////////////////////////

    if(cond==false){printf("Oh, my keyboard!");}
    else{printf("I become the guy.");}
}
