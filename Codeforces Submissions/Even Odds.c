#include<stdio.h>
#include<math.h>

int main(){
    long long n,pos,i;
    scanf("%I64d%I64d",&n,&pos);
    long long half=ceil(n*1.0/2);
    if(pos<=half){
        printf("%I64d",pos*2-1); //odd num = 2n-1
    }else{
        printf("%I64d",(pos-half)*2); // even number = 2n
    }
}
//1 3 5 7 9
//2 4 6 8 10
