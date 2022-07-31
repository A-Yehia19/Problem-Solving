#include<stdio.h>
int main(){
    int x[1000];
    int n;
    int i=0;
    int m=0;
    int j=1;
    int l=0;
    int c=0;
// to scan inputs
    scanf("%d",&n);
    while (n>i){
        scanf("%d",&x[i]);
            i++;}
// to count number of floors
        for (i = 0; i<n ; i++){
            if (x[i] == j){
                l++ ;
                if (l>m){
                    m=l;}}}
    printf("%d\n",m);
// to count number of stairs (the problem is here)
    l=1;
    for (i = 1; i<=n ; i++){
        if (x[i]==1){
            printf("%d ",l);
            l=1;
        }else{
            l++;
        }}
    printf("%d",l-1);
}
