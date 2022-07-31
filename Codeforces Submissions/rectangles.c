//#include<stdlib.h>
//#include<cctype>
//#include<string.h>
//#include<math.h>
#include<stdio.h>

int main(void){
    int x,y,ans=0;
    printf("enter rows: ");
    scanf("%d",&x);
    printf("enter columns: ");
    scanf("%d",&y);
    char grid[100][100];
    //////////////////////////////////////////////////print dots//////////////////////////////////////////////////////////////////////////////////
    for (int i=0 ; i<x ; i++){for (int j=0 ; j<y ; j++){printf(".  ");}printf("\n");}

    ///////////////////////////////////////////////////problem answer/////////////////////////////////////////////////////////////////////////////
    for(int x1 =0 ; x1<x ; x1++){
        for(int y1 =0 ; y1<y ; y1++){
            for(int x2 =x1+1 ; x2<x ; x2++){
                for(int y2 =y1+1 ; y2<y ; y2++){
                    if(x1 != x2 && y1 != y2){
                        ans++;
                    }
                }
            }
        }
    }
    printf("the number of rectangles are = %d",ans);
}
