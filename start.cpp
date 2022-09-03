#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<numeric>
#include<vector>

using namespace std;

int main(){
	char in[1000];
	scanf("%s",in);
	int len=strlen(in);
	char pattern[1000];
	scanf("%s",pattern);
	vector <char> letters;
	for(auto x : in)
		letters.push_back(x);
	

	bool ans=false;
	int start=0;
	for (int end = 0; end < len; end++)
	{
		if(end > letters.size()-1){
			if(is_permutation(in+start, in+end, pattern)==true){
				ans=true;
				break;
			}
			start++;
		}
	}
	cout<<ans;
}
