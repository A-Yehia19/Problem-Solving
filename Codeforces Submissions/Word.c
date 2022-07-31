#include<ctype.h>
#include<string.h>
#include<stdio.h>

int main(){
    char in[101];
    scanf("%s",&in);
    int up=0,low=0;

    for(int i=0 ; i<strlen(in) ; i++){
        if(in[i]==tolower(in[i]))
            low++;
        else
            up++;
    }
    for(int i=0 ; i<strlen(in) ; i++){
        if(up>low)
            in[i]=toupper(in[i]);
        else
            in[i]=tolower(in[i]);
    }
    printf("%s",in);
}
