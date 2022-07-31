#include<stdio.h>
#include<string.h>
int main(){
    char in[101];
    scanf("%s",in);
    int r=0,g=0,b=0;
    for(int i=0 ; i<strlen(in) ; i++){
        if(in[i]=='R')
            r++;
        if(in[i]=='G')
            g++;
        if(in[i]=='B')
            b++;
    }
    printf("Red stones = %d\nBlue stones = %d\nGreen stones = %d",r,b,g);
}
