#include <bits/stdc++.h>

using namespace std;
 
int main(){
	int n,laces;
	unordered_map <int,pair<int, vector<int>>> con; // each student and < number of its connections, [who it is connected with] >
	scanf("%d%d",&n,&laces);

	// scanning
	for (int i = 0; i < laces; i++){
		int tmp1,tmp2;
		scanf("%d%d",&tmp1,&tmp2);
		if(con.find(tmp1)!=con.end()){
			con[tmp1].first++;
			con[tmp1].second.push_back(tmp2);
		}else{
			vector <int> tmp;
			tmp.push_back(tmp2);
			con[tmp1] = make_pair(1, tmp);
		}

		if(con.find(tmp2)!=con.end()){
			con[tmp2].first++;
			con[tmp2].second.push_back(tmp1);
		}else{
			vector <int> tmp;
			tmp.push_back(tmp1);
			con[tmp2] = make_pair(1, tmp);
		}
	}

	int groups = 0;
	bool finished=false;
	while(!finished){
		vector<int> to_delete;
		int group_size = 0;

		for(auto it = con.begin(); it!=con.end(); it++){ 
			// it.first -> key, it.second -> value
			if(it->second.first==1){
				group_size++;
				to_delete.push_back(it->first);
			} 
		}

		if (group_size==0){
			finished=true;
		}else{
			for (int i = 0; i < to_delete.size(); i++){
				/*
				 * to delete this connnection we must delete this key from the other nodes
				 * 1- get number to delete (key)
				 * 2- serach for other element's vector for this key
				 * 3- get its' index and delete it
				 * 4- delete this node
				 * 
				 * corner case: if the other node is also about to be delete then skip operating on it (it will be gone any way)
				*/

				int key = to_delete[i];
				int other_node_key = con[key].second[0];
				// auto other_node = con[other_node_key];

				if (count(to_delete.begin(), to_delete.end(), other_node_key) == 0){
					con[other_node_key].first--;

					auto idx = find(con[other_node_key].second.begin(), con[other_node_key].second.end(), key);
					con[other_node_key].second.erase(idx);
				}

				con.erase(key);
			}
			groups++;
		}
	}

	printf("%d",groups);
}