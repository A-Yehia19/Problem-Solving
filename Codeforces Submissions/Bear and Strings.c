#include <stdio.h>
#include <string.h>
 
int main(){
	char line[5001];
	scanf("%s",line);
	int len = strlen(line);
	long long ans=0;

	for (int i = 0; i < len-3; i++){
		int contains_atleast_one_bear=0;
		for (int j = i+3; j < len; j++){
			// if bear is already found
			// or find a new bear
			if((line[j-3]=='b' && line[j-2]=='e' && line[j-1]=='a' && line[j]=='r') || contains_atleast_one_bear){
				contains_atleast_one_bear++;
				ans++;
			}	
		}	
	}

	printf("%lld",ans);
}