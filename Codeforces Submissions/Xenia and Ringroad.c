//#include<stdlib.h>
//#include<cctype>
//#include<string.h>
//#include<math.h>
#include<stdio.h>

int main(void){
    long long house,task,in[100000],max=1,ans=1;
    scanf("%I64d",&house);
    scanf("%I64d",&task);
    for(int i=0 ; i<task ; i++){
        scanf("%I64d",&in[i]);
    }
    for(int i=0 ; i<task ; i++){
        if(in[i]==in[i+1]){continue;}
        else{
            if(in[i]>max){
                ans+=in[i]-max;
                max=in[i];
            }else if(in[i]<max){
                ans+=(house-max)+in[i];
                max=in[i];
            }
        }
    }
    printf("%I64d",ans-1);
}
