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
    ListNode* rev(ListNode* head){
        if(!head->next){
            return head;
        }
        // ListNode* t = head->next;
        // head->next->next = head;

        ListNode* t = rev(head->next);
        head->next->next = head;
        head->next = NULL;
        return t;
    }

    ListNode* reverseList(ListNode* head) {
        if(!head || !(head->next))
            return head;
        return rev(head);

    }
};
