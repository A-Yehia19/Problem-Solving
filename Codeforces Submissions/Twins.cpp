#include<stdio.h>
//#include<string.h>
//#include<vector>
#include<iostream>
//#include<math.h>
#include<algorithm>

using namespace std;

int main(){
    int n,in[101],sum=0,ans=0,taken=0;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&in[i]);
        sum+=in[i];
    }
    sort(in,in+n);
    for(int i=n-1 ; sum >= taken ; i--){
        taken+=in[i];
        sum-=in[i];
        ans++;
    }
    printf("%d",ans);
}

