//#include<stdlib.h>
//#include<cctype>
#include<string.h>
//#include<math.h>
#include<stdio.h>

    int abc[26];
    int tot_abc[26];
int main(void){
    char name1[101],name2[101],tot[202];
    scanf("%s",&name1);
    scanf("%s",&name2);
    scanf("%s",&tot);

    if (strlen(name1)+strlen(name2)==strlen(tot)){
        for (int i=0 ; i<strlen(name1) ; i++){
            abc[name1[i]-'A']++;
        }
        for (int i=0 ; i<strlen(name2) ; i++){
            abc[name2[i]-'A']++;
        }
        for (int i=0 ; i<strlen(tot) ; i++){
            tot_abc[tot[i]-'A']++;
        }
        int cond = 100;
        for (int i=0 ; i<26 ; i++){
            if (abc[i]!=tot_abc[i]){
                cond = 0;
            }
        }
        if (cond==100){printf("YES");}
        else{printf("NO");}
    }else{
        printf("NO");
    }
}
