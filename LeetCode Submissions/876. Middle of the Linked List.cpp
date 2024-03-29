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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* tmp;
        for(tmp = head; tmp!=NULL; tmp=tmp->next)
            count++;
        
        tmp=head;
        for(int i=0; i<count/2; i++){
            tmp=tmp->next;
        }
        return tmp;
    }
};