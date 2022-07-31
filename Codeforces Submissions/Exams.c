#include <stdio.h>

int main(){
    int num,mark,ans,done;
    scanf("%d%d",&num,&mark);
    done = 2 * num;
    ans = num;
    for(int i=0 ; done!=mark && ans>0 ; i++){
        ans--;
        done++;
    }
    printf("%d",ans);
}
