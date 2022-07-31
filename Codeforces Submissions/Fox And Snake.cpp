#include<stdio.h>
int main(){
    int n,m,i;
    scanf("%d",&n);
    scanf("%d",&m);
    for (i=1 ; i<=n ; i++){
        if (i%2 != 0){
            for (int j=1 ; j<=m ; j++){
                printf("#");
            }
        }else{
            if (i%4!=0){
                for(int k=1 ; k<m ; k++){
                    printf(".");
                }
                printf("#");
            }else{
                printf("#");
                for(int l=1 ; l<m ; l++){
                    printf(".");
                }
            }
        }
        printf("\n");
    }
}
