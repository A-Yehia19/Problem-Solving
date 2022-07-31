#include<stdio.h>
#include<string.h>
#include<vector>
#include<iostream>
//#include<algorithm>

using namespace std;

int main(){
    vector <char> in;
    char a[100];
    scanf("%s",a);
    int len=strlen(a);
    for(int i=0 ; i<len ; i++){
        in.push_back(a[i]);
    }
    if(in[0]=='-'){
        if(in[len-1]-'0' > in[len-2]-'0')
            in.erase(in.begin()+len-1);
        else
            in.erase(in.begin()+len-2);
        len--;
        if(len==2 && in[1]=='0'){
            in.erase(in.begin());
            len--;
        }
    }
    for(int i=0 ; i<len ; i++){
        printf("%c",in[i]);
    }
}
