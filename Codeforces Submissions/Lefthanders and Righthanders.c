#include<stdio.h>

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    char in[101];
    scanf("%d",&n);
    scanf("%s",in);
    for(int i=0 ; i<n/2 ; i++){
        int j=n/2+i;
        if(in[i]==in[j]){
            printf("%d %d\n",i+1,j+1);
            }
        else if(in[i]!=in[j]){
            if(in[i]=='L')
                printf("%d %d\n",i+1,j+1);
            else
                printf("%d %d\n",j+1,i+1);
        }
    }
}
