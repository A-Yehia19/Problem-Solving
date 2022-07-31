#include<stdio.h>
#include<cctype>
#include<string.h>
int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i=0 ; i<k ; i++){
        if (n%10==0){
            n=n/10;
        }else{
            n=n-1;
        }
    }
    printf("%d",n);
}
