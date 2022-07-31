#include<stdio.h>
#include<cctype>
#include<string.h>
int main(){
    char name[100];
    scanf("%s",name);
    int len=strlen(name);
    for (int i=0 ; i<len ; i++){
        if (name[i]=='H' || name[i]=='Q' || name[i]=='9'){
            printf("YES");
            return 0;
        }
        if(name[len-1]=='+' && len>=2 && name[len-2]-'a'>=0){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}
