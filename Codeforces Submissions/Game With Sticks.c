//#include<stdlib.h>
//#include<cctype>
//#include<string.h>
//#include<math.h>
#include<stdio.h>

int main(void){
    int x,y;
    scanf("%d %d",&x,&y);
    while (1){
        x--;y--;
        if(x*y==0){
            printf("Akshat");
            return 0;
        }
        x--;y--;
        if(x*y==0){
            printf("Malvika");
            return 0;
        }
    }
}
