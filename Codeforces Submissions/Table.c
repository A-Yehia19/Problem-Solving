#include <stdio.h>

int main(){
    int row,col,flag=4,table[51][51];
    scanf("%d%d",&row,&col);
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            scanf("%d",&table[i][j]);
            if( (i==0 || i==row-1 || j==0 || j==col-1) && table[i][j]==1 ){
                flag=2;
            }
        }
    }
    printf("%d",flag);
}
