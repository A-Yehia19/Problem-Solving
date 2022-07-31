#include<stdio.h>
int x[10][10];
int main(){
    int n,m;
    scanf("%d",&n);
    for (int j=0 ; j<n ; j++){
        x[0][j]=1;
    }
    for (int i=1 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            m=j;
            while(m>=0){
                x[i][j]+=x[i-1][m];
                m--;
            }
        }
    }
    printf("%d",x[n-1][n-1]);
}
