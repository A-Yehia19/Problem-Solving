#include<stdio.h>
#include<cctype>
#include<string.h>
int main(){
    int n,x[100000],max;
    max=0;
    scanf("%d",&n);
    for (int i=0 ; i<n ; i++){scanf("%d",&x[i]);}
    for (int i=0 ; i<n ; i++){
        int streak = 1;
        for(int j=i+1 ; j<n ; j++){
            if (x[j]>=x[i]){
                streak++;
                i++;
            }else{break;}
        }
        if (max<streak){max=streak;}
    }
    printf("%d",max);
}
