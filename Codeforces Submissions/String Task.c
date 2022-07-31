//#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>

int main(){
    char in [101],out [202];
    int j=0;
    scanf("%s",&in);
    for (int i=0 ; i<strlen(in) ; i++){
        if (in[i] == toupper(in[i]))
            in[i] = tolower(in[i]);
        if (in[i] == 'a' || in[i] == 'e' || in[i] == 'i' || in[i] == 'o' || in[i] == 'u' || in[i] == 'y')
            continue;
        out[j]='.';
        j++;
        out[j]=in[i];
        j++;
    }
    out[j]='\0';
    printf("%s",out);
}
