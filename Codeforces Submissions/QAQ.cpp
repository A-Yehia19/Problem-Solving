#include<stdio.h>
#include<string.h>
int main(){
    char x[100];
    int n=0;
    scanf("%s",&x);
    int l=strlen(x);
    for(int i=0 ; i<l ;i++){
        if (x[i]=='Q'){
            for (int j=i+1 ; j<l ; j++){
                if (x[j]=='A'){
                    for (int k=j+1 ; k<l ; k++){
                        if (x[k]=='Q'){
                            n=n+1;
                        }
                    }
                }
            }
        }
    }
    printf("%d",n);
}
