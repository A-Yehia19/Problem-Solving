#include<stdio.h>

void checkColor(char color);
int safePos(int x, int limit);

int colors[26]={0};  // array of stored colors
int ans = 0;
int main(){
    char desk[101][101];
    char color;
    int row, col;

    scanf("%d%d",&row,&col);
    scanf(" %c",&color);
    for(int i=0; i<row; i++){
        scanf("%s",desk[i]);
    }

    for(int x=0; x<row; x++){
        for(int y=0; y<col; y++){
            char up = desk[safePos(x-1, row)][y];
            char down = desk[safePos(x+1, row)][y];
            char left = desk[x][safePos(y-1, col)];
            char right = desk[x][safePos(y+1, col)];

            if(desk[x][y]==color){
                if(up != '.' && up != color) // up
                    checkColor(up);
                
                if(down != '.' && down != color) // down
                    checkColor(down);
                
                if(right != '.' && right != color) // right
                    checkColor(right);
                
                if(left != '.' && left != color) // left
                    checkColor(left);
                
            }
        }
    }
    printf("%d",ans);
}

int safePos(int x, int limit){ // if searching out of bounds adjust it
    if(x>=limit)
        return limit-1;
    if(x<0)
        return 0;
    return x;
}

void checkColor(char color){  // check if new color increment ans
    if(colors[color-'A'] == 0){
        colors[color-'A'] = 1;
        ans++;
    }
}