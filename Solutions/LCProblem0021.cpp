// Created by Geison Lira on 14/07/2025

/**
* Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr && list2 == nullptr){
            return nullptr;
        }
        ListNode* result = new ListNode();
        for(ListNode* p = result; list1!=list2; p = p->next){
            if(list1 == nullptr && list2 != nullptr){
                p->val = list2->val;
                p->next = list2->next;
                break;
            }
            if(list2 == nullptr && list1 != nullptr){
                p->val = list1->val;
                p->next = list1->next;
                break;
            }
            if(list1 != nullptr && list2 != nullptr){
                if(list1->val < list2->val){
                    p->val = list1->val;
                    list1 = list1->next;
                }
                else{
                    p->val = list2->val;
                    list2 = list2->next;
                }
                p->next = new ListNode();
            }
        }
        return result;
    }
};