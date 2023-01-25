#include<stdio.h>
#include<cctype>       //to make upper and lower cases
//#include<math.h>       //to include mathematics functions
#include<string.h>
int main(){
    char str1[101], str2[101];
    scanf("%s%s",str1,str2);
    int len = strlen(str1);
    for (int i = 0; i < len; i++){
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);
    }
    printf("%d",strcmp(str1,str2));
}