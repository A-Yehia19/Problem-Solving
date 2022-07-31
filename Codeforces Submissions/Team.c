//#include<ctype.h>
//#include<string.h>
#include<stdio.h>

int main(){
    int n,ans=0;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        int chk=0;
        for(int j=0 ; j<3 ; j++){
            int l;
            scanf("%d",&l);
            chk+=l;
        }
        if(chk>1)
            ans++;
    }
    printf("%d",ans);
}
