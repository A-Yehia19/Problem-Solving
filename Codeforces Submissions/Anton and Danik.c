//#include<stdlib.h>                //for absolute function
//#include<ctype.h>
//#include<string.h>
#include<stdio.h>

int main(){
    int len,a=0,d=0;
    scanf("%d",&len);
    char in[100000];
    scanf("%s",&in);
    for(int i=0 ; i<len ; i++){
        if(in[i]=='A')
            a++;
        else
            d++;
    }
    if(a==d)
        printf("Friendship");
    else if(a>d)
        printf("Anton");
    else
        printf("Danik");
}
