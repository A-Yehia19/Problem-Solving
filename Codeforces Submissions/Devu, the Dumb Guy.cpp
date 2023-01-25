#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, learn;
	long long chapter[100000];
	long long ans=0;
	
	scanf("%lld %lld", &n, &learn);
	
	for (int i = 0; i < n; i++)
		scanf("%lld",&chapter[i]);
	
	sort(chapter,chapter+n);

	for (int i = 0; i < n; i++){
		ans += chapter[i]*learn;

		if(learn!=1)
			learn--;
	}
	
	printf("%lld",ans);
}
