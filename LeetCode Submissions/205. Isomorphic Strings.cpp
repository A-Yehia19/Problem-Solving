#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> link;
        unordered_map<char,char> values;
        int len = s.length();
        for (int i = 0; i < len; i++){

            if(link.find(s[i])==link.end())  //new letter to introduce the link, but...
                if(values.find(t[i])!=values.end()) //check if that character is alreadyy mapped to
                    return false;
                else{
                    link[s[i]]=t[i];
                    values[t[i]]='t';
                }
            
            else //already linked
                if(link[s[i]]!=t[i]) // different linkage -> error
                    return false;
        
        }
        return true;
    }
};