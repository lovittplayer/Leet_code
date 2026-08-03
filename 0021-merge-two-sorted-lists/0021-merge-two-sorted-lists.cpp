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
        ListNode* tempC = new ListNode(-1);
        ListNode* c = tempC;
        ListNode* a = list1;
        ListNode*b = list2;

        if(a==NULL) return b;
        if (b==NULL) return a;

        while(a!=NULL && b!=NULL) {
            if(a->val<=b->val) {
                tempC->next = a;
                a = a->next;
                tempC = tempC->next;
            }

            else {
                tempC->next = b;
                b = b->next;
                tempC = tempC->next;

            }

            if(a==NULL) {
                tempC->next = b;
                return c->next;
            }

            if(b==NULL) {
                tempC->next = a;
                return c->next;
            }
        }

        return c->next;
        
    }
};