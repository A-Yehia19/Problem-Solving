#include<stdio.h>

int main(){
    int n, ans = 0;
    char current;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        char tmp;
        scanf(" %c",&tmp);
        
        if(i==0)
            current=tmp;   
        else{
            if(current != tmp)
                current=tmp;
            else
                ans++;
        }
    }
    

    printf("%d",ans);
}

