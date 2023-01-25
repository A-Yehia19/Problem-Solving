#include <bits/stdc++.h>
 
using namespace std;

vector<int> luck ;
void push_luck (long long num);
 
int main(){
    int num;
    scanf("%d",&num);
    push_luck(0); // generate all lucky numbers
    
    sort(luck.begin(), luck.end());
 
    int pos = lower_bound(luck.begin(), luck.end(), num) - luck.begin();

    printf("%d",pos);
}

// insert all lucky numbers but the furst element is 0 (to masimulate the 1-based index)
void push_luck (long long num){
    if (num > 1000000000)
        return ;
 
    luck.push_back(num) ;
    push_luck(num * 10 + 4) ;
    push_luck(num * 10 + 7) ;
}