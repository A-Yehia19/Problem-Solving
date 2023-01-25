#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int max_idx=0;
	vector<int> seq[100000];

	scanf("%d",&n);
	// scan the input and get the max index of the problem to search for
	for (int i = 0; i < n; i++){
		int tmp;
		scanf("%d",&tmp);
		seq[tmp-1].push_back(i);
		max_idx=max(max_idx,tmp);
	}

	// check if the number have arithmatic sequence or not
	vector <int> true_answer;
	for (int i = 0; i < max_idx; i++){
		if(seq[i].size()==0)
			continue;

		if(seq[i].size()==1)
			true_answer.push_back(i);
		
		else{
			int diff=seq[i][1]-seq[i][0];
			bool pass=true;
			for (int j = 0; j < seq[i].size()-1; j++){
				if(seq[i][j+1]-seq[i][j] != diff)
					pass=false;
			}
			if(pass)
				true_answer.push_back(i);
		}
	}
	
	// print result
	printf("%d\n",true_answer.size());
	for (int i = 0; i < true_answer.size(); i++){
		int diff =0;
		if(seq[true_answer[i]].size()>1)
			diff = seq[true_answer[i]][1]-seq[true_answer[i]][0];
		
		printf("%d %d\n",true_answer[i]+1, diff);
	}
}