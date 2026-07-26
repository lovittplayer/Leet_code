/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

       ListNode* fast = head;
        ListNode* slow = head;
       bool flag = false;

        while (fast !=NULL && fast->next != NULL) {
            slow = slow->next;  // this checks ki ll mai cycle  hai 
            fast = fast->next->next;

            if (slow == fast) {
                 
             flag = true;
             break;
        }

        }
    
    if (flag == true) {
        slow = head;   // ye pta chlta hai ki kha hmra cycle ka start h 
                 while (slow!= fast) {
                    fast = fast->next;
                    slow = slow->next;
                 }
                 return slow;
            }

      else {
        return NULL;
      }


    
        
    }
};