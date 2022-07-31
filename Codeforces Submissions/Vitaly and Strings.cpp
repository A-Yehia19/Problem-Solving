#include<stdio.h>
#include<string.h>
int main(){
    char x [100];
    int x1 [100];
    char y [100];
    int y1 [100];
    char s [100];
    char a [26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    scanf("%s",x);
    scanf("%s",y);
    int l=strlen(x);
    for (int i=0 ; i<l ; i++){
        if (x[i]==y[i] || y[i]-x[i]==1 ){
            printf("No such string");
            return 0;
        }}
    for (int i=0 ; i<l ; i++){
        for(int j=0 ; j<26 ; j++){
            if (x[i]==a[j]){
                x1[i]=j;
            }
            if (y[i]==a[j]){
                y1[i]=j;
            }
        }
    }
    for (int i=0 ; i<l ; i++){
        s[i]=a[(x1[i]+y1[i])/2];
    }
    s[l]='\0';
    printf("%s",s);
}
