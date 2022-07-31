#include<unistd.h>
#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>

#define it in.begin(),in.end()
using namespace std;

int main(void){
    int n;
    vector<int>in;
    scanf("%d",&n);
    for (int i=0 ; i<n ; i++){
        int temp;
        scanf("%d",&temp);
        in.push_back(temp);
    }
    sort(it);
    for (std::vector<int>::iterator i=in.begin(); i!=in.end(); ++i)
        std::cout << *i << ' ';
}
