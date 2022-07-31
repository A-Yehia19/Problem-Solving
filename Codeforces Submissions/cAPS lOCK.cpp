#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char in[100];
    char out[100];
    scanf("%s",in);
    int len=strlen(in);
    int cond=true;
    bool first_only = false;
    for (int i=1 ; i<len ; i++){
        if (in[i]==tolower(in[i])){
            cond=false;
        }
    }
    if (cond==false){
        printf("%s",in);
        return 0;
    }
    if (in[0]==tolower(in[0])){
        first_only=true;
    }
    if (first_only==true){
        out[0]=toupper(in[0]);
        for(int i=1 ; i<len ; i++){
            out[i]=tolower(in[i]);
        }
    }else{
        for(int i=0 ; i<len ; i++){
            out[i]=tolower(in[i]);
        }
    }
    out[len]='\0';
    printf("%s",out);
}
