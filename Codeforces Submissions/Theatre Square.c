//#include<math.h>
//#include<ctype.h>
//#include<sring.h>
#include<stdio.h>

int main(){
    int x, y, l;
    long long ansy=0, ansx = 0;
    scanf("%d%d%d",&x, &y, &l);
    if( x%l == 0 )
        ansx = x / l;
    else
        ansx = (x / l) + 1;
    if( y%l == 0 )
        ansy = y / l;
    else
        ansy = (y / l) + 1;
    printf("%I64d",ansx * ansy);
}
