#include<string.h>
#include<stdio.h>

int main(){
    char in[101];
    scanf("%s",&in);
    int let=0;
    for(int j=0 ; j<26 ; j++){
        for(int i=0 ; i<strlen(in) ; i++){
            if(in[i]=='a'+j){
                let++;
                break;
            }
        }
    }
    if(let%2==0){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }
}
