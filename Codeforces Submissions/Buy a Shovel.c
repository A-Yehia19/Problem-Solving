//#include<stdlib.h>                //for absolute function
//#include<ctype.h>
#include<string.h>
#include<stdio.h>

int main(){
    int k,price,r,ans=1;
    scanf("%d",&price);
    scanf("%d",&r);
    k=price;
    while(1){
        if(k%10==0 || k%10==r)
            break;
        else{
            k+=price;
            ans++;
        }
    }
    printf("%d",ans);
}
