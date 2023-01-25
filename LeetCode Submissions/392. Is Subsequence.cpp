#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int len_S = s.length(), len_T = t.length();
        int i_S=0 , i_T=0;
        while (i_S != len_S && i_T != len_T){

            if(s[i_S]==t[i_T]) //is letter found -> 2 pointer advances
                i_S++;
                
            i_T++;  //in case not found the pointer advance to get the next letter
        }
        if(i_S==len_S)
            return true;
        else
            return false;
    }
};