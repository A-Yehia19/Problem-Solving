#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
    int n, len;
    int in[1000];
    double ans=0; // is the maximum difference / 2
    scanf("%d%d",&n,&len);
    for(int i=0; i<n; i++){
        scanf("%d",&in[i]);
    }

    sort(in,in+n);
    for (int i = 0; i < n-1; i++){
        ans = max((int) ans, in[i+1]-in[i]);
    }

    // handle the beginning and end of the road
    int boundries = max(len-in[n-1], in[0]-0); // return which need more radius
    ans = max(ans/2.0,(double) boundries);

    printf("%.10lf",ans);
}

