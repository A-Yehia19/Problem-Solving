#include<stdio.h>

int main(){
    int n, div;
    int covered=0;
    int ans=0;
    scanf("%d%d",&n,&div);
    for(int i=0; i<n; i++){
        int l,r;
        scanf("%d%d",&l,&r);
        covered += r-l+1;
    }

    int diff = covered%div;
    if (diff==0)
        printf("0");
    else
        printf("%d",div-diff);
}
// div = 3
// ..##..###.## covered = 7
// diff = 1  -> expand 2
// expand = div-diff

