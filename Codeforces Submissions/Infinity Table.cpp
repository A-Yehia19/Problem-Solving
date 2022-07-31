#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    for(;t--;){
        int n,col,row;
        scanf("%d",&n);
        int reg=(int)ceil( sqrt(n) );
        int diff=reg*reg-n;
        if(diff<reg){
            row=reg;
            col=diff+1;
        }else{
            col=reg;
            row=(reg-1)-(diff-reg);
        }
        printf("%d %d\n",row,col);
    }
}
