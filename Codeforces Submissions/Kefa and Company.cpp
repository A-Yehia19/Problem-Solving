#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int n,diff;
    vector <pair<long long,long long>> friends; // <money, factor>
    scanf("%d%d",&n,&diff);

    for (int i = 0; i < n; i++){
        int money, factor;
        scanf("%d%d",&money,&factor);
        friends.push_back(make_pair(money,factor));
    }
    
    sort(friends.begin(),friends.end()); // sort base on their money

    // 2 pointers
    // as the diffrence between the money is lower than the diff
    // expand the expand pointers
    long long ans = 0, maximum = 0, start=0;
    for (int end = 0; end < n; ){
        if(abs(friends[end].first - friends[start].first) < diff) {
            ans += friends[end].second;
            end++;
        }else{
            maximum = max(ans, maximum);
            ans -= friends[start].second;
            start++;
        }
        maximum = max(ans, maximum);
    }
    printf("%lld",maximum);
}