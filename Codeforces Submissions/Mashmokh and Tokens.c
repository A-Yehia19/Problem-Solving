#include<math.h>
#include <stdio.h>

int main(){
	long long n, a, b;
    scanf("%lld%lld%lld",&n,&a,&b);

    for (int i = 0; i < n; i++){
        long long x;
        scanf("%lld",&x);
        
        long long tokens_req = ceil(floor(x*a/b)*b/a);  

        printf("%lld ",x-tokens_req);
    }
}

// x tokens -> x*a / b money (already floored)
// equivalent number of tokens from money = x*a/b
// ? tokens -> money (x*a/b (floored))
// ? = money(floored) *b/a

// steps:
// 1- get amount of money needed
// 2- floor it
// 3- fet tokens required to get the same amount of money