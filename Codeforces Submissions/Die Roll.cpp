#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
    int num1,num2;
    int ans;
    scanf("%d%d",&num1,&num2);
    
    int max;
    if(num1>num2)
        max=num1;
    else
        max=num2;
    
    ans=6-max+1; //+1 as the max value is an answer

    int den = __gcd(6,ans); // return the greatest commmon denimenator

    printf("%d/%d",ans/den,6/den);
}

