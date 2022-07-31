//#include<stdlib.h>                //for absolute function
//#include<ctype.h>
#include<string.h>
#include<stdio.h>

int main(){
    int pos=0;
    char in[51],t[51];
    scanf("%s %s",&in,&t);
    for(int i=0 ; i<strlen(t) ; i++){
        if(in[pos]==t[i])
            pos++;
    }
    printf("%d",pos+1);
}
