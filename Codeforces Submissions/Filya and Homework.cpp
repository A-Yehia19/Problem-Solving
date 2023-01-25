#include <bits/stdc++.h>
 
using namespace std;

int main()
{
    int n;
    set <int> all;
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        all.insert(x);
    }

    // if number of unique elements more than 3 -> no way
    // if less than 3 (1 element or 2 elements) -> garanteed yes
    // if == 3 -> check if they have the  same difference or not

    if (all.size() < 3)
        cout << "YES";

    else if (all.size() > 3)
        cout << "NO";
    
    else
    {
        int arr[3];
        arr[0] = *all.begin();
        arr[1] = *(++all.begin());
        arr[2] = *(++++all.begin());
        if (arr[1] - arr[0] == arr[2]-arr[1])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}