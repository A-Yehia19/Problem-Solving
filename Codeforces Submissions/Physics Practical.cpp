#include <bits/stdc++.h>
 
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	
	int n,len=0;
	int arr[100005];
    cin>>n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
	
    sort(arr, arr+n);
    /// 3 3 4 5 7 8
    for(int start=0; start < n; start++){
		// get the length of all sub array that have valid min, max and select max lenght
		// to get the lowest removals = original length - highest length
        int end = upper_bound(arr, arr+n, arr[start]*2)-arr;
		int tmp_len = end-start;
        len=max(len, tmp_len);
    }

    cout<<n-len;
}