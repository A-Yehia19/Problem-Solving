//#include<unistd.h>
//#include<cctype>
//#include<string.h>
//#include<math.h>
#include<stdio.h>

int main(void)
{
    int n,lines[101];
    scanf("%d",&n);
    int max =-100 , min=2000;
    for (int i=0 ; i<n ; i++){
        scanf("%d",&lines[i]);
        if(lines[i]>max){max=lines[i];}
        if(lines[i]<min){min=lines[i];}
    }
    int sec=0;
    /////////////////////////////////////////////////////
    int min_pos,max_pos;
    for (min_pos=n-1 ; min_pos>=0 ; min_pos--){
        if(lines[min_pos]==min){break;}
    }
    for(max_pos=0 ; max_pos<n ; max_pos++){
        if(lines[max_pos]==max){break;}
    }
    if(max_pos<min_pos){
        sec=max_pos+(n-1-min_pos);
    }else{
        sec=max_pos+(n-1-min_pos)-1;
    }
    /////////////////////////////////////////////////////
    printf("%d",sec);
}
