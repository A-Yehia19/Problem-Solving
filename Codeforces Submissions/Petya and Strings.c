//#include<stdlib.h>                //for absolute function
#include<ctype.h>
#include<string.h>
#include<stdio.h>

int main(){
    char str1[101],str2[101];
    scanf("%s",&str1);
    scanf("%s",&str2);
    int len=strlen(str1);
    for(int i=0 ; i<len ; i++){
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
    }
    int cond=strcmp(str1,str2);
    printf("%d",cond);
}
