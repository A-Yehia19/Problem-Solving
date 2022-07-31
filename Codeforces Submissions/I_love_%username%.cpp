//#include<cctype>
//#include<string.h>

#include<stdio.h>

int main(){
    int n,arr[1002],good=0;
    scanf("%d",&n);
    for (int i=0 ; i<n ; i++){scanf("%d",&arr[i]);}

    int max=arr[0],min=arr[0];
    for(int i=1 ; i<n ; i++){
        for(int j=0 ; j<=i ; j++){
            if (arr[j]>max){
                max=arr[j];
                good++;
            }else if(arr[j]<min){
                min=arr[j];
                good++;
            }
        }
    }

    printf("%d",good);
}
