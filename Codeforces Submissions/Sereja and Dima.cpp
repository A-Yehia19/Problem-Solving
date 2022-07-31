//#include<stdlib.h>
//#include<unistd.h>
//#include<string.h>
//#include<math.h>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int n,no1=0,no2=0;
    vector<int>in;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        int k;
        cin>>k;
        in.push_back(k);
    }
    for(int i=1 ; in.size() ; i++){
        if(i%2==1){
            if(in[0]>in[in.size()-1]){
                no1+=in[0];
                in.erase(in.begin());
            }else{
                no1+=in[in.size()-1];
                in.erase(in.end()-1);
            }
        }else{
            if(in[0]>in[in.size()-1]){
                no2+=in[0];
                in.erase(in.begin());
            }else{
                no2+=in[in.size()-1];
                in.erase(in.end()-1);
            }
        }
    }
    cout<<no1<<' '<<no2;
}
