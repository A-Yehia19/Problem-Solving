#include<stdio.h>
#include<ctype.h>

int main(){
    int n;
    char in[101];
    int alph [26] = {0};
    scanf("%d",&n);
    scanf("%s",in);

    for(int i=0; i<n; i++){
        char letter = tolower(in[i]);
        alph[letter-'a']=1;
    }
    
    for(int i=0; i<26; i++){
        if(alph[i]==0){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}

