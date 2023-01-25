#include<stdio.h>
#include<string.h>

int main(){
    int n, max;
    int ans = 0;
    scanf("%d%d",&n,&max);
    for(int i=0; i<n; i++){
        char in[101];
        scanf("%s",in);

        int nums[10] = {0};
        int len = strlen(in);
        
        //generate map of nums existed
        for(int x=0; x<len ; x++){
            nums[in[x]-'0']=1;
        }
        
        // validation
        int acceptable = 1;
        for(int x=0 ; x<=max; x++){
            if(nums[x]==0)
                acceptable = 0;
        }

        if(acceptable)
            ans++;
    }
    printf("%d",ans);
}

