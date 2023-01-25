#include<stdio.h>

int main(){
    int in[100];
    int start,len;
    int ans = 0;
    scanf("%d%d",&len,&start);
    for(int i=0; i<len; i++)
        scanf("%d",&in[i]);
    int Lidx=start-1;
    int Ridx=start-1;

    int out_of_range=0; 
    while(Lidx>=0 || Ridx<len){
        int left,right;
        if(Lidx<0){
            left=1;
            out_of_range=1;
        }else
            left = in[Lidx];
        if(Ridx>=len){
            right=1;
            out_of_range=1;
        }else
            right = in[Ridx];
        
        if(left==1 && right==1 && Lidx == Ridx)
            ans+=1;
        else if(left==1 && right==1)
            ans+=2-out_of_range;
        Lidx--;
        Ridx++;
    }
    printf("%d",ans);
}

