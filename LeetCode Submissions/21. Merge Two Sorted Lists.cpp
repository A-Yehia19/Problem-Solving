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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans=NULL;
        ListNode* head=NULL;
        ListNode* tmp;

        while(list1!=NULL && list2!=NULL){
            if(list1->val < list2->val){
                tmp = new ListNode(list1->val);
                list1=list1->next;
            }
            else{
                tmp = new ListNode(list2->val);
                list2=list2->next;
            }

            if(ans==NULL){
                head=tmp;
                ans=tmp;
            }else{
                head->next=tmp;
                head = tmp;
            }
        }

        while(list1!=NULL){
            tmp = new ListNode(list1->val);
            list1=list1->next;

            if(ans==NULL){
                head=tmp;
                ans=tmp;
            }else{
                head->next=tmp;
                head = tmp;
            }
        }

        while(list2!=NULL){
            tmp = new ListNode(list2->val);
            list2=list2->next;

            if(ans==NULL){
                head=tmp;
                ans=tmp;
            }else{
                head->next=tmp;
                head = tmp;
            }
        }

        return ans;
    }
};