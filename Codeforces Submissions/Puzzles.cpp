#include<unistd.h>
#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>

#define it in.begin(),in.end()
using namespace std;

int main(void){
    int n_class,n_puzzel;
    cin >> n_class >> n_puzzel;
    vector <int> in;
    for (int i=0 ; i<n_puzzel ; i++){
        int n;
        cin >> n;
        in.push_back(n);
    }
    sort(it);
    int min =99999999;

    if (n_class==n_puzzel){
        int kl=in[n_class-1]-in[0];
        printf("%d",kl);
    }else{
        for(int i=0 ; i<=(n_puzzel-n_class) ; i++){
            int x=i,y=x+n_class-1;
            int diff = in[y]-in[x];
            if (diff < min){
                min=diff;
                }
        }
         printf("%d",min);
    }
}
