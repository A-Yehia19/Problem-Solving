#include <stdio.h>
#include<ctype.h>
int main(){
    int i;
    char in[101];
    for(i=0 ; 1 ; i++){
        scanf(" %c",&in[i]);
        if(in[i]=='?')break;
    }
    in[i-1]=tolower(in[i-1]);
    if(in[i-1]=='a' || in[i-1]=='e' || in[i-1]=='i' || in[i-1]=='o' || in[i-1]=='u' || in[i-1]=='y')
        printf("YES");
    else
        printf("NO");
}

