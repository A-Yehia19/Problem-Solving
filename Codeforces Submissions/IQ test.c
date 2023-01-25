#include<stdio.h>

int main(){
    char in[5][5];
    
    for(int i=0; i<4; i++){
        scanf("%s",in[i]);
    }

    // 2x2 filter movement
    for(int x=0; x<=2; x++){
        for(int y=0; y<=2; y++){
            int dot = 0, hash = 0;
            
            // filter counting
            for(int i=x; i<x+2; i++){
                for(int j=y; j<y+2; j++){
                    if (in[i][j]=='.'){
                        dot++;
                    }else{
                        hash++;
                    }
                }
            }

            if(dot>=3 || hash>=3){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
}

