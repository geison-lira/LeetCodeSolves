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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = new ListNode();
        for(ListNode* p = sum; l1!=l2; p = p->next){
            if(l1 == nullptr && l2 != nullptr){
                p->val += l2->val;
                l2 = l2->next;
            }
            if(l2 == nullptr && l1 != nullptr){
                p->val += l1->val;
                l1 = l1->next;
            }
            if(l1 != nullptr && l2 != nullptr){
                p->val += l1->val + l2->val;
                l1 = l1->next;
                l2 = l2->next;
            }
            if(p->val > 9){
                p->val %= 10;
                p->next = new ListNode(1);
            }
            else if(l1 != nullptr || l2 != nullptr){
                p->next = new ListNode();
            }
        }
        return sum;
    }
};