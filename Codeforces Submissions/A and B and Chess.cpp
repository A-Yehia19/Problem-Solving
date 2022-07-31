#include<stdio.h>
int main(){
    char x[8][8];
    int b,w;
    b=0;
    w=0;
    for(int i=0 ; i<8 ; i++){
            scanf("%s",x[i]);
    }
    for(int i=0 ; i<8; i++){
        for (int j=0 ; j<8 ; j++){
            if (x[i][j]=='q'){b=b+9;}
            else if(x[i][j]=='r'){b=b+5;}
            else if(x[i][j]=='b'){b=b+3;}
            else if(x[i][j]=='n'){b=b+3;}
            else if(x[i][j]=='p'){b=b+1;}

            else if(x[i][j]=='R'){w=w+5;}
            else if(x[i][j]=='Q'){w=w+9;}
            else if(x[i][j]=='B'){w=w+3;}
            else if(x[i][j]=='N'){w=w+3;}
            else if(x[i][j]=='P'){w=w+1;}
        }
    }
    if (w>b){printf("White");}
    else if (w<b){printf("Black");}
    else {printf("Draw");}
}
