#include<stdio.h>
#include<string.h>

int main(){
	int in [3],best,min=999999,max=-1000;
    for(int i=0 ; i<3 ; i++){
        scanf("%d",&in[i]);
        if(min>in[i])
            min=in[i];
        if(max<in[i])
            max=in[i];
    }
    best=max-min;
    printf("%d",best);
}
