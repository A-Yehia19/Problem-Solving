#include <stdio.h>

int main(){
    int n, last;
    long long first=0,second=0;
    int arr1[200000],arr2[200000];
    int len1=0,len2=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d",&last);
        if (last > 0){
            first += last;
            arr1[len1]=last;
            len1++;
        }else{
            second-=last;
            arr2[len2]=last*-1;
            len2++;
        }
    }
    if (first > second){
        printf("first");
    }else if(second > first){
        printf("second");
    }else{
        int len=len1;
        if(len2<len1)
            len=len2;

        // test lexicographically
        // 1- based on sequence
        for (int i = 0; i < len; i++){
            if (arr1[i] > arr2[i]){
                printf("first");
                return 0;
            }else if(arr2[i] > arr1[i]){
                printf("second");
                return 0; 
            }
        }

        // 2- based on length
        if (len1 > len2){
            printf("first");
            return 0;
        }else if(len2 > len1){
            printf("second");
            return 0; 
        }
        
        // check last
        if(last > 0)
            printf("first");
        else
            printf("second");
    }
}