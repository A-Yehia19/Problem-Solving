//#include<stdlib.h>                //for absolute function
//#include<ctype.h>
#include<string.h>
#include<stdio.h>

int main(){
    int cal[5],tot=0;
    char in[100000];
    scanf("%d%d%d%d",&cal[1],&cal[2],&cal[3],&cal[4]);
    scanf("%s",in);
    for(int i=0 ; i<strlen(in) ; i++){
        tot+=cal[in[i]-'0'];
    }
    printf("%d",tot);
}
