#include<unistd.h>
#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
#define it x.begin(),x.end()
using namespace std;

int main(void){
    char in[100];
    int n,ans=0;
    vector <char>name;
    scanf("%d",&n);
    scanf("%s",&in);
    for (int i=0 ; i<n ; i++){
        name.push_back(in[i]);
    }
/////////////////////////////////// the problem is here (it need more intelligence) ///////////////////////////////////////////////////////
    for (int j=0 ; j<=26 ; j++){
        for (int i=0 ; i<name.size() ; i++){
            if(name[i] == 'z'-j && (name[i+1] == (name[i])-1 || name[i-1] == (name[i])-1)){
                name.erase(name.begin()+i);
                ans++;
                j--;
            }
        }
    }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    printf("%d",ans);
}
