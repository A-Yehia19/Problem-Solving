#include<stdio.h>
#include<string.h>

int main(){
    char in [20];
    scanf("%s",in);
    int len = strlen(in);
    for(int i=0; i<len; i++){
        if(i==0 && in[i]=='9') // to pevent leading zeros
            continue;
        
        if(in[i]>='5')
            in[i] = ('9'-in[i]) + '0';
    }
    printf("%s",in);
}

