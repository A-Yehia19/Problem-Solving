#include<unistd.h>
#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
#include<string.h>

using namespace std;

int main(void){
    vector<char>in;
    char inp[205];
    scanf("%s",inp);
    for(int i=0 ; i<strlen(inp) ; i++){
        if(inp[i]=='W' && inp[i+1]=='U' && inp[i+2]=='B'){
            in.push_back(' ');
            i+=2;
        }else{
            in.push_back(inp[i]);
        }
    }
    for (int i=0 ; i<in.size() ; i++){
        if(in[i]==in[i+1] && in[i]==' ')
            in.erase(in.begin()+i);
        if(in[0]==' ')
            in.erase(in.begin());
    }
    for (int i=0 ; i<in.size() ; i++) {
        cout << in[i];
    }
}
