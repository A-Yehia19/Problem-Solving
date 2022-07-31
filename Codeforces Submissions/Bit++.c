//#include<math.h>
//#include<ctype.h>
//#include<string.h>
#include<stdio.h>

int main(){
    int n,x=0;
    scanf("%d",&n);
    for (int i=0 ; i<n ; i++){
        char in[4];
        scanf("%s",&in);
        if (in[1] == '+')
            x++;
        else
            x--;
    }
    printf("%d",x);
}
