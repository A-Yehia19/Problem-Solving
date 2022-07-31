#include <stdio.h>

int main(){
    char in[6];
    scanf("%s",in);
    int h=(in[0]-'0')*10+in[1]-'0';
    int m=(in[3]-'0')*10+in[4]-'0';
    for(h=h ; h<24 ; h++){
        for(m=m+1 ; m<60 ; m++){
            if(m%10==(h%100)/10 && h%10==(m%100)/10){
                printf("%d%d:%d%d\n",(h%100)/10,h%10,(m%100)/10,m%10);
                return 0;
            }
        }
        m=0;
    }
    printf("00:00");
}

