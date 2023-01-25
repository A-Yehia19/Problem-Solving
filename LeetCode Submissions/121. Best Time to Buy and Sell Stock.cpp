#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        //time limit exceed
        int max=0,len = prices.size();
        for (int i = 0; i < len; i++){
            for (int j = i+1; j < len; j++)
            {
                if(prices[j]-prices[i] >max)
                    max = prices[j]-prices[i];
            }
        }
        return max;
    }
};