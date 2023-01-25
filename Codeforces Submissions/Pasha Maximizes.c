#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    int swaps;
    char in[20];
    scanf("%s%d",in,&swaps);
    
    int len = strlen(in);
    for (int current = 0; current < len; current++){
        char Max=in[current];
        int idx=-1, dis=0;

        // get the maximum of the rest of the digits
        // and compare if the distance is acceptable to swap
        for(int pos=current+1; pos<len; pos++){
            if(in[pos]>Max && swaps>=pos-current){
                dis=pos-current;
                idx=pos;
                Max=in[pos];
            }
        }

        if(idx==-1) // didnt find max at the rest of digits (current is the max)
            continue;
        
        swaps-=dis;
        for(int i=idx; i>current; i--){
            int tmp = in[i-1];
            in[i-1] = in[i];
            in[i] = tmp;
        }
    }
    printf("%s",in);
}