#include<stdio.h>
#include<cctype>
#include<string.h>
int main(){
    char x[1000];
    char y[1000];
    scanf("%s",x);
    scanf("%s",y);
    int len=strlen(x);
    for(int i=0 ; i<len ;i++){
        if (x[i] != y[len-(i+1)]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}
