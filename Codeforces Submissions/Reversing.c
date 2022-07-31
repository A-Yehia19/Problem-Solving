//#include<unistd.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
#include<stdio.h>

int main(){
    int n,in[101];
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&in[i]);
        if(in[i]==0){
            for(int j=0 ; j<i/2 ; j++){
                int k=in[i-j-1];
                in[i-j-1]=in[j];
                in[j]=k;
//                printf("%d   %d    ",i-j-1,j);
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        printf("%d ",in[i]);
    }
}
