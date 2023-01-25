#include<stdio.h>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map <int, int> guestColor;
    int homeColor[30];
    int n,ans=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int home,guest;
        scanf("%d%d",&home,&guest);
        
        homeColor[i]=home;
        guestColor[guest]+=1;
    }

    for(int i=0; i<n; i++){
        ans+=guestColor[homeColor[i]]; // 3ahsan a3raf kam wa7ed el guest color 3ando = el home color bta3 el team da
    }

    printf("%d",ans);
}

