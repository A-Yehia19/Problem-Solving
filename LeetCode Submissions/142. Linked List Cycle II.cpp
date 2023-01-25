#include<bits/stdc++.h>

using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) //we have to return the index
    {
        ListNode *slow = head, *fast = head;
        
        while(fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
            {
                ListNode *start = head; //start = head, slow = point where slow and fast met(were equal)
                while(start != slow)
                {
                    start = start->next;
                    slow = slow->next;
                }
                return start;   //when start = slow = beginning of cycle
            }
        }
        
        return NULL;  //no cycle
    }
};