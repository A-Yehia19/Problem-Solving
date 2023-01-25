#include <bits/stdc++.h>

using namespace std;
 
int main(){
	int n;
	int in[100000];
	scanf("%d",&n);
	
	for (int i = 0; i < n; i++){
		scanf("%d",&in[i]);
	}

	sort(in,in+n);

    // triangle condition:
    // -> if the sum of the lest 2 sides is greater than the third -> triangle is formed
	for (int i = 0; i < n-2; i++){
		if(in[i+2]<in[i+1]+in[i]){
			printf("YES");
            return 0;
        }
	}
	printf("NO");	
}