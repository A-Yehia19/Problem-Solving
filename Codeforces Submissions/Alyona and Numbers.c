#include<stdio.h>

int main()
{
    long long num1[5];
    long long num2[5];
    long long n,m;
    scanf("%lld%lld",&n,&m);

    for(int i=0;i<5;i++)
    {
        // let n = 12
        // n/5 = 2      -> num that its mod = 0 -> 4 = 2 (0 -> 9)
        // find the mod of the remaining and increase its mod (10 -> mod(0), 11 -> mod(1), 12 -> mod(2))
        num1[i]=n/5;
        if(n%5>=i)
            num1[i]++;
        
        num2[i]=m/5;
        if(m%5>=i)
            num2[i]++;
    }

    num1[0]--,num2[0]--;
    long long ans = 0;      // num of pairs that are:
    ans += num1[0]*num2[0]; // num mod = 0 + mod = 0
    ans += num1[1]*num2[4]; // num mod = 1 + mod = 4
    ans += num1[2]*num2[3]; // num mod = 2 + mod = 3
    ans += num1[3]*num2[2]; // num mod = 3 + mod = 2
    ans += num1[4]*num2[1]; // num mod = 4 + mod = 1
    printf("%lld",ans);
}