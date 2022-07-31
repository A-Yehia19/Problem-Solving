#include<stdio.h>
#include<cctype>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n%2!=0){
        while (n!=1){
            if(n%2==0){printf("I love that ");n--;}
            else{printf("I hate that ");n--;}
        }
        printf("I hate it");
    }
    else{
        while (n!=1){
            if(n%2!=0){printf("I love that ");n--;}
            else{printf("I hate that ");n--;}
        }
        printf("I love it");
    }
}
