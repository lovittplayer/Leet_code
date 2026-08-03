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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int minr = 0;
        int minc = 0;
        int maxr = m-1;  
        int maxc = n-1;
        ListNode* temp = head;
        vector<vector<int>> matrix(m,vector<int>(n,-1));

        while(minr<=maxr && minc<=maxc) {
            for(int i = minc ; i<=maxc;i++) {
                if(temp == NULL) return matrix;
                matrix[minr][i] = temp->val;
                temp = temp->next;
            }
            minr++;
            if(minc>maxc || minr>maxr) break;

            for(int j =minr ; j<=maxr;j++) {
                if(temp == NULL) return matrix;
                matrix[j][maxc] = temp->val;
                temp = temp->next;
            }
            maxc--;
             if(minc>maxc || minr>maxr) break;

            for(int k =maxc ; k>=minc;k--) {
                if(temp == NULL) return matrix;
                matrix[maxr][k] = temp->val;
                temp = temp->next;
            }
            maxr--;
            if(minc>maxc || minr>maxr) break;

            for(int l =maxr ; l>=minr;l--) {
                if(temp == NULL) return matrix;
                matrix[l][minc] = temp->val;
                temp = temp->next;
            }
            minc++;
        }

        return matrix;
    }
};