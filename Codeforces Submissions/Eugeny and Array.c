#include <stdio.h>

int main(){
    int m,n,l,r,pos=0,neg=0;
    scanf("%d%d",&m,&n);
    for(int i=0 ; i<m ; i++){
        int k;
        scanf("%d",&k);
        if (k==1)
            pos++;
        else
            neg++;
    }
    for(int i=0 ; i<n ; i++){
        scanf("%d%d",&l,&r);
        int temp=r-l+1;
        if ( temp%2==0 && (temp/2<=neg && temp/2<=pos) )
            printf("1\n");
        else
            printf("0\n");
    }
}
