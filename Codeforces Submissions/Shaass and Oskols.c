#include<stdio.h>

int main(){
    int len;
    int wire[100];  // each cell represent the number of birds in that wire
    scanf("%d",&len);
    for(int i=0; i<len; i++)
        scanf("%d",&wire[i]);

    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        int idx, loc; // idx -> index of wire, loc -> location of bird
        scanf("%d%d",&idx,&loc);
        int left = loc-1;
        int right = wire[idx-1]-loc;
        wire[idx-1-1] += left;
        wire[idx+1-1] += right;
        wire[idx-1] = 0;
    }

    for(int i=0; i<len; i++)
        printf("%d\n",wire[i]);
}