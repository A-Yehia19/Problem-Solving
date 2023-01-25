#include<stdio.h>

int main(){
    int len;
    char in[2001];
    char out[2001];
    scanf("%d%s",&len,in);

    int i=0;
    int Lidx=len/2-1;
    int Ridx=Lidx+1;
    
    if (len%2==1){
        out[len/2]=in[0];
        i++;
        Ridx++;
    }

    int left=1;
    for(; i<len; i++){
        if(left){
            out[Lidx]=in[i];
            Lidx--;
            left=0;
        }else{
            out[Ridx]=in[i];
            Ridx++;
            left=1;
        }
    }
    out[len]='\0';

    printf("%s",out);
}

