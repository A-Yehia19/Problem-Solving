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
        int n1,n2,test,ans;
        scanf("%d%d%d",&n1,&n2,&test);
        int dif=abs(n1-n2);
        int total=dif*2;
        if(test > total/2)
            ans=test-dif;
        else
            ans=test+dif;
        if(n1>total || n2>total || test>total || ans>total)
            printf("-1\n");
        else
            printf("%d\n",ans);
    }
}
