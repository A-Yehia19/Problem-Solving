#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char in[101];
    scanf("%s",in);

    int len = strlen(in);
    char current='a';
    int ans=0;
    

    for(int i=0; i<len; i++){
        int clock_wise = abs(in[i]-current);
        int anti_clock_wise = 26-clock_wise;
        
        if(clock_wise>=anti_clock_wise)
            ans+=anti_clock_wise;
        else
            ans+=clock_wise;
        
        current=in[i];
    }
    printf("%d",ans);
}

