#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n,k,in[51];
    scanf("%d",&k);
    for(;k--;){
        scanf("%d",&n);
        for(int i=0 ; i<n ; i++){
            scanf("%d",&in[i]);
        }
        sort(in,in+n);
        bool cond=0;
        for(int i=0 ; i<n-1 ; i++){
            if(in[i+1]-in[i]>1)
                cond=1;
        }
        if(cond==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
