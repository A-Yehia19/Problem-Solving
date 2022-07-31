#include<stdio.h>
#include<string.h>
int main(){
    int n,ans=0;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        char in[105];
        scanf("%s",in);
        if(strlen(in)==1 && in[0]<='9' && in[0]>='0')
            ans++;
        else if(strlen(in)==2 && in[0]=='1' && in[1]<'8' && in[1]>='0')
            ans++;
        else if(strcmp(in,"BRANDY")==0)
            ans++;
        else if(strcmp(in,"CHAMPAGNE")==0)
            ans++;
        else if(strcmp(in,"WINE")==0)
            ans++;
        else if(strcmp(in,"WHISKEY")==0)
            ans++;
        else if(strcmp(in,"VODKA")==0)
            ans++;
        else if(strcmp(in,"TEQUILA")==0)
            ans++;
        else if(strcmp(in,"SAKE")==0)
            ans++;
        else if(strcmp(in,"GIN")==0)
            ans++;
        else if(strcmp(in,"RUM")==0)
            ans++;
        else if(strcmp(in,"BEER")==0)
            ans++;
        else if(strcmp(in,"ABSINTH")==0)
            ans++;
        else
            continue;
    }
    printf("%d",ans);
}
//ABSINTH, BEER, BRANDY, CHAMPAGNE, GIN, RUM, SAKE, TEQUILA, VODKA, WHISKEY, WINE
