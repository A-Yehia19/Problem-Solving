#include <bits/stdc++.h>

using namespace std;

void calculate(char in[], int pos);
vector<int> possibilites;

int main(){
	char in1[11];
	char in2[11];
	cin >> in1 >> in2;

	int len = strlen(in1);
	int pos=0;
	for (int i = 0; i < len; i++){
		if(in1[i]=='+')
			pos++;
		else
			pos--;
	}

	calculate(in2,0);

	long long prob_num = possibilites.size();
	long long counter = 0;
	for (long long i = 0; i < prob_num; i++){
		if(possibilites[i]==pos)
			counter++;
	}
	
	cout << setprecision(9);
	cout << counter*1.0/prob_num;
}

void calculate(char in[], int pos){
	if (in[0] == '+')
		calculate(in + 1, pos + 1);
	else if (in[0] == '-')
		calculate(in + 1, pos - 1);
	else if (in[0] == '?'){
		calculate(in + 1, pos + 1);
		calculate(in + 1, pos - 1);
	}
	else if (in[0] == '\0')
		possibilites.push_back(pos);
}