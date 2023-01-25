#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char in1[200000], in2[200000];
    scanf("%s%s",in1,in2);
    
    long long ans = 0;
    int len1 = strlen(in1);
    int len2 = strlen(in2);
    
    // has commulative numbers of ones and zeros
    // if zero is found -> increment 1 from the last record
    // else pass it without change
    int ones[200001]={0}, zeros[200001]={0};
    for(int i=0; i<len2 ; i++) {
        zeros[i + 1] = zeros[i] + (in2[i] == '0');
        ones[i + 1] = ones[i] + (in2[i] == '1');
    }
    
    // in case of zero it search for ones
    // it get the last element it can gets and subtract if fom the first element it can get
    //                 ^                                                ^
    //          most cummulitive ones                ones counted and the digit cant access

    int length_diff=len2-len1;
    for(int i=0; i<len1 ; i++) {
        if (in1[i] == '0')
            ans += ones[length_diff + i + 1] - ones[i];
        else 
            ans += zeros[length_diff + i + 1] - zeros[i];
    }
    printf("%lld",ans);
    return 0;
}