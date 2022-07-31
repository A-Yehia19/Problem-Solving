//#include<unistd.h>
//#include<string.h>
//#include<ctype.h>
//#include<math.h>
#include<stdio.h>

int main(){
    float disc,price;
    scanf("%f%f",&disc,&price);
    printf("%.2f",100*price/(100-disc));
}
