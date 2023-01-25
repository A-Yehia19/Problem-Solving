#include<stdio.h>
#include<algorithm>
#include<string.h>

using namespace std;

int main(){
    char in[101];
    scanf("%s",&in);
    int len = strlen(in);
    sort(in,in+len);

    for (int i =len/2; i < len; i++){
        if(i==len-1)
            printf("%c",in[i]);
        else
            printf("%c+",in[i]);
    }
    
}

