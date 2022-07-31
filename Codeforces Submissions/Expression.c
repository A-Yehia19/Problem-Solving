//#include<stdlib.h>
//#include<cctype>
//#include<string.h>
//#include<math.h>
#include<stdio.h>

int main(void){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int max=0;
    int ans1=(a+b)*c;
    if(ans1>max)
        max=ans1;
    int ans2=a*b*c;
    if(ans2>max)
        max=ans2;
    int ans3=a*(b+c);
    if(ans3>max)
        max=ans3;
    int ans4=a+b*c;
    if(ans4>max)
        max=ans4;
    int ans5=a*b+c;
    if(ans5>max)
        max=ans5;
    int ans6=a+b+c;
    if(ans6>max)
        max=ans6;
    printf("%d",max);
}
