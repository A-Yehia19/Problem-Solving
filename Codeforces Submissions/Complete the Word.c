#include <stdio.h>
#include <string.h>

int main(){
	int alph[26]={0};
    char in[50000];
    scanf("%s",in);

	int len = strlen(in);

    int question = 0; // number of ?
    int current = 0; // current amount of letters
    // sliding window algoritm count number of alphabets in substring of lenght 26
    for (int end = 0; end < len; end++){
        // get next item
        if(in[end]=='?')
            question++;
        else{
            if (alph[in[end]-'A'] == 0){
                current++;
            }
            alph[in[end]-'A']++;
        }

        // expand window till size = 26
        if(end<25){ 
            continue;
        }
        

        // remove old item
        int start = end-26;
        if(in[start]=='?')
            question--;
        else{
            alph[in[start]-'A']--;
            if (alph[in[start]-'A'] == 0){
                current--;
            }
        }

        // check if nice
        if(current+question==26){
            // modify on the array and replace ? with valid letter
            for (int i = start+1; i <= end; i++){
                if (in[i]=='?'){
                    // check for letters not shown
                    for (int j = 0; j < 26; j++){
                        if(alph[j]==0){
                            alph[j]=1;
                            in[i]='A'+j;
                            break;
                        }
                    }
                }
            }

            // replace other ? not in substring with any letter
            for (int i = 0; i < len; i++)
                if (in[i]=='?')
                    in[i]='A';

            // print the answer
            printf("%s",in);
            return 0;
        }
    }
    printf("-1");
}