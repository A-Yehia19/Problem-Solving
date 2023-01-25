#include<stdio.h>
#include<string.h>

int main(){
    char n;
    char keyboard[] = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char dir;
    char in[101];
    scanf(" %c",&dir);
    scanf("%s",in);

    int offset;
    if(dir =='L')
        offset = 1;
    else
        offset = -1;
    int len = strlen(in);
    int keylen = strlen(keyboard);
    for(int i=0; i<len; i++){
        for (int j = 0; j < keylen; j++){
            if (in[i]==keyboard[j]){
                printf("%c",keyboard[j+offset]);
            }
        }
    }
}

