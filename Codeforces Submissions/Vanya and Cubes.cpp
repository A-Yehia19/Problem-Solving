#include<stdio.h>
int main(){
    int x[1000]={0};
    x[0]=1;
    for (int i=1 ; i<1000 ; i++){
            x[i]=x[i-1]+(i+1);
    }
    int n;
    scanf("%d",&n);
    int i=0;
    while (n>0){
        if (n-x[i]<0){
            printf("%d",i);
            return 0;
        }else if (n-x[i]==0){
            printf("%d",i+1);
            return 0;
        }else{
            n=n-x[i];
            i++;
        }
    }
}
