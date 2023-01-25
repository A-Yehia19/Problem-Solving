#include<stdio.h>

int main(){
    int len;
    char in[1001];
    scanf("%d",&len);
    scanf("%s",in);
    int start=0;
    int end=0;

    int left = 0;  // if he go left
    int right = 0; // if he go right
    for (int i = 0; i < len; i++){
        if(in[i]=='R')
            right++;
        if(in[i]=='L')
            left++;
    }
    

    
    if(left && right){  // if both direction is provided
        for (int  i = 0; i < len; i++){
            // the bear always start from the first 'R' and end in the last 'R'
            if(start==0 && in[i]=='R')
                start=i+1; // based 1 index
            if(end==0 && in[i]=='L')
                end = i;   // (i+1) based 1 index -1 -> to get the last 'R'
        }

    }else if (right){ // go right only
        for (int  i = 0; i < len; i++){
            // the bear always start from the first 'R' and end in the first '.' after the 'R'
            if(start==0 && in[i]=='R')
                start=i+1; // based 1 index
            if(end==0 && start!=0 && in[i]=='.')
                end = i+1;   // (i+1) based 1 index +1 -> to get the last 'R'
        }

    }else{ // go left only
        for (int  i = 0; i < len; i++){
            // the bear always start from the last 'L' and end in the last '.' before the 'L'
            if(end==0 && in[i]=='L')
                end = i;   // (i+1) based 1 index -1 -> to get the last 'R'
            if(start==0 && end!=0 && in[i]=='.')
                start=i; // based 1 index
        }
    }

    printf("%d %d",start,end);
}

