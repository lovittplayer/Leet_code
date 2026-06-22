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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode * temp = head;
        int n = 0;
        while (temp!=NULL) {
            temp = temp->next;
            n++;
        }
        temp = head;
        int size = n/k;
        int extra = n%k;
        vector <ListNode*> v;
        while(temp!=NULL) {
            ListNode* c = new ListNode(100);
            ListNode* tempC = c;
            int s = size;
            if(extra>0) {
                s++;
                extra--;
            }
        for(int i = 1; i<=s;i++) {
            tempC->next = temp;
            temp = temp->next;
            tempC = tempC->next;
        }
         tempC->next = NULL;
         v.push_back(c->next);
        }

    if(v.size()<k) {
        while(v.size()!=k) {
            v.push_back(NULL);
        }
    }
     return v;
    }
};