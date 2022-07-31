#include<stdio.h>
int main(){
    char seq[200];
    int l=0;
    int n;
    int s=0;
    scanf("%d",&n);
    scanf("%s",&seq);
    for (int i=0 ; i<n ; i++){
        if (seq[i]=='U'){ seq[i]=1; }
        else if (seq[i]=='D'){ seq[i]=-1; }
        else if (seq[i]=='L'){ seq[i]=2000; }
        else if (seq[i]=='R'){ seq[i]=-2000; }
    }

    for (int i=0 ; i<n ; i++){
        l=seq[i];
        for (int j=i+1 ; j<n ; j++){
            l=seq[j]+l;
            if (l==0){ s++; }

        }
    }
    printf("%d",s);
}
