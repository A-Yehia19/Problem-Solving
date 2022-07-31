#include<string.h>
#include<stdio.h>

int main(){
    int n,home[31],away[31],ans=0;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        scanf("%d%d",&home[i],&away[i]);
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(away[i]==home[j])
                ans++;
        }
    }
    printf("%d",ans);
}
