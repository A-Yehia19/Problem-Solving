#include<stdio.h>
//#include<cctype>
//#include<string.h>
int lst[5];
int main(){
    int n,x,ans;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&x);
        lst[x]++;
    }
    ans=0;
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////    4 case  /////////////////////////////////////////////////////////////////////////////////////////
    ans+=lst[4];
    ////////////////////////////////////////////////////////    2 case  /////////////////////////////////////////////////////////////////////////////////////////
    while(lst[2]>0){
        if(lst[2]>=2){
            ans++;
            lst[2]-=2;
        }else if(lst[2]==1 && lst[1]>=2){
            ans++;
            lst[2]--;
            lst[1]-=2;
        }else if(lst[2]==1 && lst[1]==1){
            lst[2]--;
            lst[1]--;
            ans++;
        }else if(lst[2]==1 && lst[1]==0){
            ans++;
            lst[2]--;
        }
    }
    ////////////////////////////////////////////////////////    3 case  /////////////////////////////////////////////////////////////////////////////////////////
    while(lst[3]>0){
        if(lst[3]>=1 && lst[1]>=1){
            ans++;
            lst[3]--;
            lst[1]--;
        }else if(lst[3]>=1 && lst[1]==0){
            ans++;
            lst[3]--;
        }
    }
    ////////////////////////////////////////////////////////    1 case  /////////////////////////////////////////////////////////////////////////////////////////
    while(lst[1]>0){
        if(lst[1]>=4){
            ans++;
            lst[1]-=4;
        }else if(lst[1]==3){
            ans++;
            lst[1]-=3;
        }else if(lst[1]==2){
            ans++;
            lst[1]-=2;
        }else if(lst[1]==1){
            ans++;
            lst[1]--;
        }
    }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    printf("%d",ans);
}
