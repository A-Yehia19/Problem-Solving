#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    vector<int> alph(26,0);
    char in[1001];
    scanf("%s",in);
    int len = strlen(in);
    int odd=0; // counter of odd letters
    
    // count frequency of each letter
    for(int i=0; i<len; i++)
        alph[in[i]-'a']++;

    // count the number of odd letters
    for(int i=0; i<26; i++)
        if(alph[i]%2==1)
            ++odd;
    
    // if there is atmost 1 odd letter
    if( odd==0 || odd%2==1 )
        printf("First");
    else 
        printf("Second");
}
/*
 * each person tries to make the string not palindrome
 * the string is palindrome if the is
 *  - atmost 1 odd letter
 * 
 * so each person tries to remove from the even letters (to increase odd)
 *                                    (to make the string more difficlt to be palidrome)
 * 
 * if player remove one from the even letters
 * the other is forced to remove the other pair
 * so the question will return to the origin
 * so we can conclude the solution based on the starting information only
 */