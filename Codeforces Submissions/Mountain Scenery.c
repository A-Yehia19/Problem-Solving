#include<stdio.h>

int main(){
    int n, tweaks;
    int peak[201];
    int invalid_idx[201]={0};

    // scanning
    scanf("%d%d",&n,&tweaks);
    for(int i=0; i<2*n+1; i++){
        scanf("%d",&peak[i]);
    }
    
    for(int i=1; i<2*n && tweaks; i+=2){
        if(peak[i]>peak[i-1]+1 && peak[i]>peak[i+1]+1){
            peak[i]--;
            tweaks--;
        }
    }

    // printing
    for(int i=0; i<2*n+1; i++){
        printf("%d ",peak[i]);
    }
}

