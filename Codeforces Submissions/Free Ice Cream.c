#include<stdio.h>

int main(){
    long long n, icecream;
    long long sad = 0;
    scanf("%lld%lld",&n,&icecream);
    for(int i=0; i<n; i++){
        char sym;
        int amount;
        scanf(" %c%d",&sym,&amount);
        if (sym=='+')
            icecream+=amount;
        else{
            if(icecream>=amount)
                icecream-=amount;
            else
                sad++;
        }
    }
    printf("%lld %lld",icecream, sad);
}

