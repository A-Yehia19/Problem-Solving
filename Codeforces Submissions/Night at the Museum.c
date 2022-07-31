#include<stdlib.h>                //for absolute function
//#include<ctype.h>
#include<string.h>
#include<stdio.h>

int main(){
    char in[101],last='a';
    int ans=0;
    scanf("%s",in);
    for(int i=0 ; i<strlen(in) ; i++){
        int k=abs(in[i]-last);
        if(k > abs(26-k)){                     // we subtract it from 26 to calculate the reverse as angle of circle we subtract 360
            ans+=abs(26-k);
        }else{
            ans+=k;
        }
        last=in[i];
    }
    printf("%d",ans);
}
