#include <stdio.h>
#include <string.h>

int main(){
    int n=0;
    char in[101],out[101];
    scanf("%s",in);
    int len=strlen(in);
    for(int i=0 ; i<len ; i+=2){
        if(in[i]=='1'){
            out[n]='1';
            out[n+1]='+';
            n+=2;
        }
    }for(int i=0 ; i<len ; i+=2){
        if(in[i]=='2'){
            out[n]='2';
            out[n+1]='+';
            n+=2;
        }
    }for(int i=0 ; i<len ; i+=2){
        if(in[i]=='3'){
            out[n]='3';
            out[n+1]='+';
            n+=2;
        }
    }
    out[len]='\0';
    printf("%s",out);
}

