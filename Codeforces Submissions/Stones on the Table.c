//#include<stdlib.h>                //for absolute function
//#include<ctype.h>
//#include<string.h>
#include<stdio.h>

int main(){
    int len,ans=0;
    char in[51];
    scanf("%d",&len);
    scanf("%s",&in);
    for(int i=0 ; i<len-1 ; i++){
        if(in[i]==in[i+1])
            ans++;
    }
    printf("%d",ans);
}
