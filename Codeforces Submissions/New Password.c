#include<stdio.h>

int main(){
    int len, uni;
    char out[101];
    scanf("%d%d",&len,&uni);
    out[len]='\0';
    
    for (int i = 0; i < len; i++){
        out[i] = 'a' + i%uni; // to clip the addition range ex: (0 1 2 0 1 2 0 1 2 ...)
    }
    printf("%s",out);
}