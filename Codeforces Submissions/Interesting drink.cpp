#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int shops,days,prices[100000],coins;
    scanf("%d",&shops);
    for(int i=0 ; i<shops ; i++){
        scanf("%d",&prices[i]);
    }
    sort(prices, prices+shops);
    scanf("%d",&days);
    for(int i=0 ; i<days ; i++){
        scanf("%d",&coins);
        printf("%d\n",upper_bound(prices, prices+shops, coins)-prices);
    }
}
