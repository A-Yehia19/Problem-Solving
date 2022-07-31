//#include<math.h>
//#include<ctype.h>
//#include<string.h>
#include<stdio.h>

int main(){
//    int cont=freopen("file.in","r",stdin);
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        int k;
        scanf("%d",&k);
        if(k>=5)
            printf("%d\n ",k-5);
        else
            printf("0\n");
    }
}
