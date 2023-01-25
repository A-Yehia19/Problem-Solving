#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    for(;t--;){
        char in[101];
        scanf("%s",in);
        int len = strlen(in);
        if(len>10)
            printf("%c%d%c\n",in[0],len-2,in[len-1]);
        else
            printf("%s\n",in);

    }
}

