#include <stdio.h>

int main(){
    int n,loss,max=0,last,now;

    scanf("%d%d",&n,&loss);
    scanf("%d",&last);
    for(int i=1 ; i<n ; i++){
        scanf("%d",&now);
        if(max<last-now-loss)
            max=last-now-loss;
        last=now;
    }
    printf("%d",max);
}

