//#include<stdlib.h>                //for absolute function
//#include<ctype.h>
#include<string.h>
#include<stdio.h>

int main(){
    int in[4],same=0;
    scanf("%d%d%d%d",&in[0],&in[1],&in[2],&in[3]);
    for(int i=0 ; i<4 ; i++){
        for(int j=i+1 ; j<4 ;j++){
            if(in[i]==in[j]){
                same++;
                break;

            }
        }
    }
    printf("%d",same);
}
