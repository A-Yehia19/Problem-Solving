#include<stdio.h>
#include<string.h>

int main(){
    char stand[51];
    char inst[51];
    int ans=0;
    scanf("%s %s",stand,inst);
    int len = strlen(inst);
    for(int i=0; i<len; i++){
        if(inst[i]==stand[ans])
            ans++;
    }
    printf("%d",ans+1); // because 1-index based
}

