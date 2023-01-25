#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int in[100000];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
		scanf("%d",&in[i]);

	int start=0,end=0;
	int step = 0;

	// step 0 -> get start of interval to be reversed
	// step 1 -> get end of interval to be reversed

	for (int i = 1; i < n; i++){
		if(step==0 && in[i]<in[i-1]){
			start = i-1;
			step++;
		}if(step==1 && in[i]>in[i-1]){
			end = i-1;
			break;
		}if(step==1 && i==n-1){
			end = i;
			break;
		}
	}
	reverse(in+start,in+end+1);

	if(is_sorted(in,in+n)){
		printf("yes\n");
		printf("%d %d", start+1, end+1);
	}else{
		printf("no");
	}

}
