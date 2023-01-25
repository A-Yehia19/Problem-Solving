#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int in[100000];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> in[i];
    }

    for (int i = 0; i < n; i++){
        int maximum, minimun;
        int before, after;

        if(i==0)
            before = in[i+1];
        else
            before = in[i-1];
        
        if(i==n-1)
            after = in[i-1];
        else
            after = in[i+1];
        
        minimun = min(abs(in[i]-before), abs(in[i]-after));
        maximum = max(abs(in[i]-in[0]), abs(in[i]-in[n-1]));
        cout << minimun << ' ' << maximum << endl;
    }
}