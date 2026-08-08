/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    vector<int> inorderTraversal(TreeNode* root) {
         vector<int> ans;
         if(root==NULL) return ans;
        TreeNode * nodee = root;
        stack<TreeNode*> st;
        while(st.size()>0 || (nodee !=nullptr)) {
            if(nodee !=NULL) {
                st.push(nodee);
                nodee = nodee->left;
            }
            else {
                TreeNode * temp = st.top();
                st.pop();
                ans.push_back(temp->val);
                nodee = temp->right;
            }
        }
        return ans;
    }
};