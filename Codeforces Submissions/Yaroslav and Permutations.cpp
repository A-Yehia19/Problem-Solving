#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    bool verify = true;
    unordered_map <int, int> in;
    scanf("%d",&n);
    
    
    for (int i = 0; i < n; i++){
        int tmp;
        scanf("%d",&tmp);
        in[tmp]++;
    }

    // to make teir is a possible answer their must be:
    // - max freq = X 
    // - other elements = X-1 -> to fill between that number
    // - so the whole array must be >= X + X - 1 (2X-1)
    for (auto it = in.begin(); it != in.end(); it++){
        if(n < 2*(*it).second-1 )
            verify=false;
    }

    

    if(verify)
        printf("YES");
    else
        printf("NO");
}
