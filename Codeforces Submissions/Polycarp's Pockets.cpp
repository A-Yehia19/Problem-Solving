#include<stdio.h>
//#include<cctype>       //to make upper and lower cases
//#include<math.h>       //to include mathematics functions
//#include<string.h>     //to make most of string functions
int main(){
    int x[100];
    int n;
    int i,j;
    int m=1;
    scanf("%d",&n);
    i=0;
    while (i<n){
        scanf("%d",&x[i]);
        i++;
    }
    for (j = 1 ; j<=100; j++){
        int l=0;
        for (i = 0; i<n ; i++){
            if (x[i] == j){
                l++ ;
                if (l>m){
                    m=l;}}}}
    printf("%d",m);
}
