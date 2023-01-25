#include<stdio.h>
#include<string.h>

int main(){
    char str1[1000001];
    char str2[1000001];

    scanf("%s%s",str1,str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if(strcmp(str1,str2) == 0)
        printf("-1");
    else if(len1>len2)
        printf("%d",len1);
    else
        printf("%d",len2);
}

