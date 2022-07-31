#include <stdio.h>

int main(){
    int n,in[101];
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&in[i]);
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            for(int k=0 ; k<n ; k++){
                if(in[i]==in[j]+in[k] && k!=j){
                    printf("%d %d %d",i+1,j+1,k+1);
                    return 0;
                }
            }
        }
    }
    printf("-1");
}
