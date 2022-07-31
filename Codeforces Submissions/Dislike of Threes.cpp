#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t,num=1;
    int seq[1001];
    for(int i=0 ; i<1000 ; i++,num++){
        while(num%3==0 || num%10==3)
            num++;
        seq[i]=num;
    }
    scanf("%d",&t);
    for(;t--;){
        int tmp;
        scanf("%d",&tmp);
        printf("%d\n",seq[tmp-1]);
    }
}
