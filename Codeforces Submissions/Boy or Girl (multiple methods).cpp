#include<bits/stdc++.h>

using namespace std;

int alphabets_way(char in[]);
int map_way(char in[]);
int unique_way(char in[]);
int ingnore_exist_way(char in[]);

int main(){
    char in[101];
    scanf("%s",&in);

    // choose counting method //

    //int let=alphabets_way(in);
    int let=map_way(in);
    // int let=unique_way(in);
    // int let=ingnore_exist_way(in);
    
    if(let%2==0){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }
}

int alphabets_way(char in[]){
    // this method try to iterate on all alphabets 
    // it take a letter and try to find it in the input string
    // if found once it stop searching in the input string (it will not be able to count the same letter again)
    // each letter will be counted once
    // return the unique letters count
    // complexity O(26*n) ~ O(n)

    int let=0;
    for(int j=0 ; j<26 ; j++){
        for(int i=0 ; i<strlen(in) ; i++){
            if(in[i]=='a'+j){
                let++;
                break;
            }
        }
    }
    return let;
}

int ingnore_exist_way(char in[]){
    // this method counts the unique letters by ignoring the letter that exist in the future
    // it iterate on the string and check if this letter will be found in the next letters of the string
    // it counts only letters that dosent have a coppy in the future letters
    // flag is used to check on the whole string if not found flag = true

    int let=0;
    for(int i=0 ; i<strlen(in) ; i++){
        bool flag = true;
        for(int j=i+1 ; j<strlen(in) ; j++){
            if(in[j]==in[i]){
                flag=false;
                break;
            }
        }
        if (flag)
            let++;
    }
    return let;
}

int map_way(char in[]){
    // this method store all letters in map to garantee non repition 
    // the unique letters = size of the map
    // complexity O(n)

    unordered_map <char,int> mp;
    for(int i=0 ; i<strlen(in) ; i++)
        mp[in[i]]++;
    
    return mp.size();
}

int unique_way(char in[]){
    // this method use uniqur function in algorithm to keep all unique letter stogether
    // the letters must be sorted in order to allow unique work
    // return iterator that point at the last unique letter
    // complexity O(nlog(n))

    int len = strlen(in);
    sort(in,in+len);
    auto it = unique(in,in+len);

    return it-in;
}
