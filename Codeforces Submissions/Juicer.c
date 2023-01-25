#include<stdio.h>

int main(){
    int n;
    int max_cap;
    int max_waste;
    int ans=0;
    int capacity=0;
    scanf("%d%d%d",&n,&max_cap,&max_waste);
    for(int i=0; i<n; i++){
        int orange;
        scanf("%d",&orange);
        if(orange<=max_cap){
            capacity+=orange;
        }
        
        if(capacity>max_waste){
            ans++;
            capacity=0;
        }
    }
    printf("%d",ans);
}

