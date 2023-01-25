#include<stdio.h>
#include<math.h>

int main(){
    double a,b;
    int years=0;
    scanf("%lf%lf",&a,&b);

    //a*3^years > b*2^years
    //log(a) + years * log(3) > log(b) + years * log(2)
    //years*(log(3) - log(2)) > log(b)-log(a)
    // years = (log(b)-log(a)) / (log(3) - log(2));  => years must be geater than that number (floor then add 1)
    //                                                                              (ceil wont solve whole number case)
    years = floor ( log10(b/a) / log10(1.5) ) + 1;
    printf("%d",years);
}
