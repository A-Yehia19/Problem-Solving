#include<stdio.h>

int main(){
    int x,z,ans=0;
    scanf("%d%d",&x,&z);
    if(x<=z){
    for(int i=x+1 ; i<z ; i++){
        if(i%2==0){
            ans++;
            i++;
        }
    }
    }else{
        for(int i=z+1 ; i<x ; i++){
        if(i%2==0){
            ans++;
            i++;
        }
    }
    }
    printf("%d",ans);
}
