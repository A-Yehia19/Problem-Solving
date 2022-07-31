#include<stdio.h>
#include<cctype>
#include<string.h>
int main(){
    char x[50];
    int l,t;
    scanf("%d",&l);
    scanf("%d",&t);
    scanf("%s",x);
    for (int j=0 ; j<t ; j++){
        for (int i=0 ; i<l ; i++){
            if (x[i]=='B' && x[i+1]=='G'){
                char c = x[i];
                x[i] = x[i + 1];
                x[i + 1] = c;
                i++;
            }
        }
    }
    printf("%s",x);
}
