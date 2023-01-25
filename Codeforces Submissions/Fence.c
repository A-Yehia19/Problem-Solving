#include<stdio.h>

int main(){
    int n,ans=0;
    int len;
    int in[900000];
    scanf("%d%d",&n,&len);
    
    int start = 0;
    int min = 0;
    int sum = 0;
    for(int end=0; end<n; end++){
        scanf("%d",&in[end]);

        // sliding window
        if(end<len){ //expand the window to fit the len
            sum+=in[end];
            min+=in[end];
        }else{
            sum+=in[end]; // expand 1 time
            sum-=in[start]; // shrink 1 time
            start++;
            if(sum<min){
                ans=start;
                min=sum;
            }
        }
    }
    printf("%d",ans+1); // 1 base index
}

