#include<stdio.h>
#include<string.h>

int main(){
    int cal[4];
    int ans = 0;
    char in[100001];

    for(int i=0; i<4; i++)
        scanf("%d",&cal[i]);
    
    scanf("%s",in);
    int len = strlen(in);
    for (int i = 0; i < len; i++){
        int idx = in[i]-'0';
        ans+=cal[idx-1];
    }

    printf("%d",ans);
}

