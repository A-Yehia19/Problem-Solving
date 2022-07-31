#include<stdio.h>
#include<cctype>       //to make upper and lower cases
//#include<math.h>       //to include mathematics functions
#include<string.h>
int main(){
    char x[100];
    char y[100];
    int i=0;
    int n;
    scanf("%s",&x);
    scanf("%s",&y);
    while (x[i]!='\0'){
        x[i]=tolower(x[i]);
        y[i]=tolower(y[i]);
        i++;
    }
   n=strcmp(x,y);
   printf("%d",n);
    }
