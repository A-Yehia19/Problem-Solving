#include <stdio.h>
#include <string.h>
int main(){
    char in[101];
    int n=0,i=0,t=0,e=0;
    scanf("%s",in);
    for(int j=0 ; j<strlen(in) ; j++){
        if(in[j]=='n')
            n++;
        else if(in[j]=='i')
            i++;
        else if(in[j]=='t')
            t++;
        else if(in[j]=='e')
            e++;
    }
    int min = 999999999;
    if (min > e/3)
        min = e/3;
    if (min > t)
        min = t;
    if (min > i)
        min = i;
    if(n>3){
        n-=3;
        if (min > n/2+1 && n>0)
            min = n/2+1 ;
    }else{
        if (min > n/3)
            min = n/3;
    }
    printf("%d",min);
}
//nineteen
