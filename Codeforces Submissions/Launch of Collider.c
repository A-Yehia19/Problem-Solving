#include<stdio.h>

int main(){
    int n;
    char dir[200001];
    int in[200000];
    int ans = 999999999;
    scanf("%d",&n);
    scanf("%s",dir);
    for(int i=0; i<n; i++){
        scanf("%d",&in[i]);
        if(i==0)
            continue;
        
        if(dir[i-1]=='R' && dir[i]=='L')
            if(ans > (in[i]-in[i-1])/2)
                ans = (in[i]-in[i-1])/2;
    }
    if(ans == 999999999)
        printf("-1");
    else
        printf("%d",ans);
}

