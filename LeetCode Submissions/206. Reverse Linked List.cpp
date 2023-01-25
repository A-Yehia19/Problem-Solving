#include<bits/stdc++.h>

using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* ans=NULL;
    ListNode* reverseList(ListNode* head) {
        if (head==NULL)
            return ans;
        
        ListNode* tmp = new ListNode(head->val,ans);
        ans=tmp;
        return reverseList(head->next);
    }
};