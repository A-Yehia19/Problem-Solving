#include <stdio.h>
#include <string.h>

int main(){
	int alph1[26]={0};
	int alph2[26]={0};
    char s1[101],s2[101];
    scanf("%s%s",s1,s2);

	int len1 = strlen(s1);
	int len2 = strlen(s2);
    for(int i = 0; i < len1; i++)
        alph1[s1[i]-'a']++;
	
	for(int i = 0; i < len2; i++)
        alph2[s2[i]-'a']++;

	// if the second string has leteer not in the string to be modified -> cant be solved
    for(int i = 0; i < 26; i++)
        if(alph1[i]<alph2[i]){
            printf("need tree");
            return 0;
        }
	// else they have the same letters -------------
	
	// if they have the same lengh also -> use array
    if(len1==len2){
        printf("array");
        return 0;
    }

	// if the length is different -> we will use automaton or both
	// use two pointer algorithm to loop on the second string incase it fount the same letter
	// if the 2nd pointer ends in the end of the string -> there is only extra letters
	// else there is extra letters and the order is different

    int j = 0;
    for(int i=0; i < len1; i++)
        if(s1[i] == s2[j])
            j++;

    if(j == len2)
        printf("automaton");
    else
        printf("both");
    return 0;
}