#include <stdio.h>
#include <string.h>
 
int main(){
	/*
	 * if 0 has to pay 10 rubles then depts[0] +=10
	 * but if some one has to pay 0 5 rubles then depts[0] -= 5
	 * postive number means depts to pay
	 * negative numbers means he take money without paying (not a dept)
	*/

	int depts[100]={0};
	int n,m;
	scanf("%d%d",&n,&m);
	
	for (int i = 0; i < m; i++){
		int a,b,x;
		scanf("%d%d%d",&a,&b,&x);

		depts[a-1] += x; // a pay money
		depts[b-1] -= x; // b recieve money
	}

	long long ans=0;

	for (int i = 0; i < n; i++){
		if(depts[i]>0)
			ans+=depts[i];
	}
	
	printf("%lld",ans);
}