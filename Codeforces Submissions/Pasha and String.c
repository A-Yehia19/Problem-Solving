#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char in[200005];
    int rev[200005]={0};
    scanf("%s",in);
    scanf("%d",&n);
    int len=strlen(in);
    
    // get each letter should be swaped how times by comulitive sum trick
    // - the start of the swap is incremented 
    // - and the one after the range is decremented
    for(int i=0; i<n; i++){
        int Start;
        scanf("%d",&Start);
        int End=len-Start+1;
        rev[Start]++;
        rev[End+1]--;
    }

    // if swaps is odd (need swap (even will swap the return to origin)) swap
    for(int i=1; i <= len/2; i++){
        rev[i]+=rev[i-1];
        if(rev[i]%2==1){
            char tmp = in[(len-i+1)-1];
            in[(len-i+1)-1] = in[i-1];
            in[i-1] = tmp;
        }
    }
    printf("%s",in);
}