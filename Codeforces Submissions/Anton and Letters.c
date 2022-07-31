#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main(){
    char line[1001];
    int alph [26]={0};
    gets(line);
    int ans=0;
    int len=strlen(line);
    for(int i=1 ; i<len-1 ; i++){
        if(line[i]>='a'&&line[i]<='z'){
            if(alph[line[i]-'a']==0)
                ans++;
            alph[line[i]-'a']++;
        }
    }
    printf("%d",ans);
}
