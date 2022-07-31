#include<stdio.h>

int main(){
    int n,m,max;
    scanf("%d%d",&n,&m);
    if(n>m)
        max=n;
    else
        max=m;
    switch(max){
        case 1:
            printf("1/1");
            return 0;
        case 2:
            printf("5/6");
            return 0;
        case 3:
            printf("2/3");
            return 0;
        case 4:
            printf("1/2");
            return 0;
        case 5:
            printf("1/3");
            return 0;
        case 6:
            printf("1/6");
            return 0;
    }
}
