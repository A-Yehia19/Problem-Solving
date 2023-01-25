#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char in1[100];
    char in2[100];
    scanf("%s",in1);
    scanf("%s",in2);
    int len1 = strlen(in1);
    int len2 = strlen(in2);
    
    // count left and right
    int right=0;
    int left=0;
    char right_char[100];
    char left_char[100];
    int separator_found = 0;
    for (int i = 0; i < len1; i++){
        if(in1[i]=='|'){
            separator_found=1;
            continue;
        }
        if(separator_found){
            right_char[right]=in1[i];
            right++;
        }else{
            left_char[left]=in1[i];
            left++;
        }
    }
    
    // calculation
    int diff = abs(right-left);
    if((len2-diff)%2==0 && len2>=diff){
        for (int i = 0; i < len2; i++){
            if(left>right){
                right_char[right]=in2[i];
                right++;
            }else{
                left_char[left]=in2[i];
                left++;
            }
        }
        left_char[left]='\0';
        right_char[right]='\0';
        printf("%s|%s",left_char,right_char);
    }
    else{
        printf("Impossible");
    }
    
}

