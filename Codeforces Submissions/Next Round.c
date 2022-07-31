#include<stdio.h>
#include<cctype>
#include<string.h>
int main(){
    int n,k;
    int ans=0;
    int lst[50];
    scanf("%d %d",&n,&k);
    for (int i=0 ; i<n ; i++){scanf("%d",&lst[i]);}
    for (int i=0 ; i<n ; i++){
        if(lst[i]>0 && lst[i]>=lst[k-1]){ans++;}
    }
    printf("%d",ans);
}
