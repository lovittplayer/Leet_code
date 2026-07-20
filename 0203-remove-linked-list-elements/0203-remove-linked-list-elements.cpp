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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * temp3 = new ListNode(-1);
        temp3->next = head;
        ListNode* temp = head;
        ListNode* temp2 = temp3;

        while(temp!=NULL) {
            if(temp->val == val) {
                temp2->next = temp->next;
                delete temp;
                temp = temp2->next;
            }
            else {
                temp2  = temp;
                temp = temp->next;
            }
        }

        return temp3->next;

        
    }
};