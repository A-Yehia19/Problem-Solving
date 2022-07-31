#include <stdio.h>

int main(){
    int n,in[100],min=999999,flag1,flag2;
    scanf("%d",&n);
    for (int i=0 ; i<n ; i++){
        scanf("%d",&in[i]);
    }
    for (int i=0 ; i<n ; i++){
        int j=i+1;
        if(j==n)
            j=0;
        int k=in[i]-in[j];
        if(k < 0)
            k*=-1;
        if(k<min){
            min=k;
            flag1=i;
            flag2=j;
        }
    }
    printf("%d %d",flag1+1,flag2+1);
}
//6
//744 359 230 586 944 442
