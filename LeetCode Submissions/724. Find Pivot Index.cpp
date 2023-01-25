#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans=0, len=nums.size(),total=0;
        for (int i=0 ; i<len ; i++)
            total+=nums[i];
        int sum=0;
        for(;ans<len;ans++){
            if(sum==total-sum-nums[ans])
                return ans;
            sum+=nums[ans];
        }
        return -1;
    }
};