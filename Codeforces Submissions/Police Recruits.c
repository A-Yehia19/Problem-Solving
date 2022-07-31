//#include<stdlib.h>                //for absolute function
//#include<ctype.h>
//#include<string.h>
#include<stdio.h>

int main(){
    int n,in,ans=0,current=0;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&in);
        current+=in;
        if(current==-1){
            ans++;
            current=0;
        }
    }
    printf("%d",ans);
}
