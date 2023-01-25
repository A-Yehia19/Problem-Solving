#include<stdio.h>
#include<iostream>
#include<deque>

using namespace std;

int main(){
    int n;
    bool playerOne = true;
    int player1=0, player2=0;
    cin >> n;
    deque<int> in ;
    
    for(;n--;){
        int tmp;
        cin >> tmp;
        in.push_back(tmp);
    }

    for(; in.size() ;){
        int max;
        int start = in[0];
        int end = in[in.size()-1];
        
        if(start>=end){
            max=start;
            in.pop_front();
        }else{
            max=end;
            in.pop_back();
        }

        if(playerOne)
            player1+=max;
        else
            player2+=max;
        
        playerOne = !playerOne;
    }

    cout << player1 <<' '<< player2;
}

