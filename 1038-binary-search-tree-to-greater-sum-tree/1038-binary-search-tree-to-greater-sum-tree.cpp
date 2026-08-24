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
  void inorder(TreeNode* root,vector <int> & v) {
    if (root == NULL) return;
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
  }

  void gst(TreeNode* root,vector <int> & v,int & idx) {
        if (root == NULL) return;
        gst(root->left,v,idx);
        root->val = v[idx];
        idx++;
       gst(root->right,v,idx);
  }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        int n = v.size();
        for(int i = n-2;i>=0;i--) {
            v[i] += v[i+1];
        }
        int idx = 0;
        gst(root,v,idx);
       return root;

        
    }
};