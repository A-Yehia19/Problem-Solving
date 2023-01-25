#include <bits/stdc++.h>
 
using namespace std;

int main(){
	int lines, len;
	char line[1001];
	set <int> distances;
	scanf("%d%d",&lines,&len);
	for (int i = 0; i < lines; i++){
		scanf("%s",line);
		int dwarf,candy;
		for (int j = 0; j < len; j++){
			if(line[j]=='G')
				dwarf=j;
			if(line[j]=='S')
				candy=j;
		}
		if(candy<dwarf){
			printf("-1");
            return 0;
        }
		if (candy>dwarf){
			int diff = candy - dwarf;
			distances.insert(diff);
		}
	}
    printf("%d",distances.size());
}