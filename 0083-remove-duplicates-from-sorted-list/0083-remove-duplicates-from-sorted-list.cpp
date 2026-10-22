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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head ==NULL || head->next == NULL) return head;
        ListNode * p = head;
      
        while(p!=NULL && p->next!=NULL) {
            while(p->next!=NULL &&  p->val == p->next->val) {
              p->next = p->next->next;
           }
           p = p->next;
       
           
           
        }

        return head;
    }
};