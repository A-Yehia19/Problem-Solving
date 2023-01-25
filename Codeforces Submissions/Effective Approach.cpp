#include<stdio.h>
#include<unordered_map>
#include<utility>

using namespace std;

int main(){
    int n,q;
    unordered_map <int, pair<int,int>> in;  // map {key (value to search) : <form start, from end> }
    long long person1 = 0, person2 = 0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int input,fromStart,fromEnd;
        scanf("%d",&input);
        fromStart=i+1;
        fromEnd=n-i;
        pair<int,int> tmp;
        tmp.first=fromStart;
        tmp.second=fromEnd;
        in[input] = tmp;
    }

    scanf("%d",&q);
    while (q--){
        int req, search1=1, search2=1;
        scanf("%d",&req);
        person1 += in[req].first;
        person2 += in[req].second;
    }
    printf("%I64d %I64d",person1,person2);
}

