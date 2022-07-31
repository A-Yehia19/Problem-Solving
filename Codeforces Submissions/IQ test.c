//#include<stdlib.h>
//#include<cctype>
//#include<string.h>
//#include<math.h>
#include<stdio.h>

int main(void){
    int n;
    int in[101];
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++)
        scanf("%d",&in[i]);
    int flag1=in[0]%2;
    int flag2=in[1]%2;
    int flag3=in[2]%2;
          if(flag1 == flag2 && flag1 != flag3){
        printf("3",n);
    }else if(flag1 == flag3 && flag1 != flag2){
        printf("2");
    }else if(flag2 == flag3 && flag2 != flag1){
        printf("1");
    }else if(flag1 == flag2 && flag2 == flag3){
        for (int i=3 ; i<n ; i++){
            if(in[i]%2 != flag1){
                printf("%d",i+1);
                return 0;
            }
        }
    }
}
