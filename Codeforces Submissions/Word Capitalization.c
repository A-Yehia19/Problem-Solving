#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char in[1001];
    scanf("%s",in);
    in[0]=toupper(in[0]);
    printf("%s",in);
}
