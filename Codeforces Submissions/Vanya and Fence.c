//#include<ctype.h>
//#include<string.h>
#include<stdio.h>

int main(){
    int n,h;
    int w=0;
    scanf("%d",&n);
    scanf("%d",&h);
    for(int i=0 ; i<n ; i++){
        int len;
        scanf("%d",&len);

        if(len>h){
            w+=2;
        }
        else{
            w++;
        }

    }
    printf("%d",w);
}
