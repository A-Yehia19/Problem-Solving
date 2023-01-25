#include<stdio.h>

int main(){
    int n, ans = 0;
    int hired = 0;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++){
        int tmp;
        scanf("%d",&tmp);
        if(tmp>0)
            hired+=tmp;
        else{
            if(hired)
                hired--;
            else
                ans++;
        }
    }
    printf("%d",ans);
}

