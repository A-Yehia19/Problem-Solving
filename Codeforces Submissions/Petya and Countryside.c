#include<stdio.h>

int main(){
    int n,ans=0;
    int in[1000];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%d",&in[i]);
    
    for(int i=0; i<n; i++){
        int covered = 1;
        int prev_LVL = in[i];

        for(int l=i-1; l>=0 ; l--){
            if(in[l] <= prev_LVL){
                covered++;
                prev_LVL=in[l];
            }else
                break;
        }
        prev_LVL = in[i];
        for(int r=i+1; r<n ; r++){
            if(in[r] <= prev_LVL){
                covered++;
                prev_LVL=in[r];
            }else
                break;
        }

        if(ans<covered)
            ans=covered;
    }

    printf("%d",ans);
}

