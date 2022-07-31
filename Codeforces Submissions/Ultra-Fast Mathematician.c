#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main(){
    char line1[101],line2[101];
    scanf("%s",&line1);
    scanf("%s",&line2);
    int len=strlen(line1);
    for(int i=0 ; i<len ; i++){
        if(line1[i]==line2[i])
            printf("0");
        else
            printf("1");
    }
}
