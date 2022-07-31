//#include<stdlib.h>
//#include<cctype>
//#include<string.h>
//#include<math.h>
#include<stdio.h>

int main(void){
    int n,in[101],out[101];
    scanf("%d",&n);
    for (int i=0 ; i<n ; i++){
        scanf("%d",&in[i]);
        out[in[i]-1]=i+1;
    }
    for(int i=0 ; i<n ; i++){
        printf("%d ",out[i]);
    }
}
