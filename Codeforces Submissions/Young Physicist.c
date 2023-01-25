#include<stdio.h>

int main(){
    int n;
    int x=0, y=0, z=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int tmpx,tmpy,tmpz;
        scanf("%d%d%d",&tmpx,&tmpy,&tmpz);
        x+=tmpx;
        y+=tmpy;
        z+=tmpz;
    }
    if(x==0 && y==0 && z==0)
        printf("YES");
    else
        printf("NO");
}

