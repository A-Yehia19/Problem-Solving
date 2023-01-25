#include<stdio.h>

int main(){
    int n;
    char color[] = "ROYGBIV";
    scanf("%d",&n);
    printf("BIV"); // work as a separator to make me print the color in a linear manner with the 4 rest colors
    n-=3;

    for(int i=0; i<n; i++){
        printf("%c",color[i%4]);
    }
}