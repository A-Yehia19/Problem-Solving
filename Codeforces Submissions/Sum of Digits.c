#include<stdio.h>
#include<string.h>

int main(){
    char num[100001];
    int sum=0, ans=0;
    scanf("%s",num);
    int len = strlen(num);
    while(len != 1){
        for (int i = 0; i < len; i++){
            sum+=num[i]-'0';
        }
        sprintf(num, "%d",sum);
        len = strlen(num);
        sum=0;
        ans++;
    }
    printf("%d",ans);
}

