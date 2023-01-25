#include<stdio.h>
#include<string.h>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map <char, int> letters;
    char in[1001];
    gets(in);
    int len = strlen(in);
    for(int i=1; i<len-1; i+=3){
        letters[in[i]]=1;
    }
    printf("%d",letters.size());
}

