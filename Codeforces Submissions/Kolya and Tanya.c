#include <stdio.h>

int main() {
	long long n;
	long long all_ways = 1, invalid = 1, mod = 1e9 + 7;
	scanf("%lld",&n);

	// allways = 3^(3n)
	for (int i = 0; i < n * 3; i++)	
		all_ways = (all_ways * 3) % mod;			
	
	// invalid for each triangle = 7^n (as each triangle has 7 invalid ways)
	for (int i = 0; i < n; i++)	
		invalid = (invalid * 7) % mod;	
 
	printf("%lld",(all_ways - invalid + mod) % mod);
}