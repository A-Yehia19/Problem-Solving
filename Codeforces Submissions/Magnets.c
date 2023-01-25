#include<stdio.h>

int main(){
    int n;
    int current;
    int ans = 1;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int tmp;
        scanf("%d",&tmp);
        if(i==0)
            current = tmp;
        
        if(current != tmp){
            ans++;
            current = tmp;
        }
    }
    printf("%d",ans);
}

