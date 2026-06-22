
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode * a = head;
        ListNode * b = head->next;
        ListNode*c = head->next->next;
        int fidx = -1; // for max dist
        int sidx = -1; // for max distance
        int f = -1; // for  min dist
        int s = -1; // for min  distance 
        int idx = 1;
        int mind = INT_MAX;

        if(c==NULL) return {-1,-1};

        while(c!=NULL) {
            if((a->val<b->val && c->val < b->val) || (a->val>b->val && c->val>b->val)) {
                 if (fidx ==-1) fidx = idx;
                 else sidx = idx;
                 f = s;
                 s = idx;
                 if(f!=-1) {
                    mind = min(mind,s-f);
                 }
            }
            a = a->next;
            b = b->next;
            c = c->next;
            idx++;
        }
        if(sidx==-1) return {-1,-1};
        int maxd = sidx - fidx;
        return {mind,maxd};
    }
};