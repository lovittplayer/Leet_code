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
    int levels(TreeNode * root) {
        if (root ==NULL) return 0;
        return 1 + max(levels(root->left),levels(root->right));
    }
    void LevelOrder(TreeNode* root, vector<vector<int>>&ans,int lvl) {
        if(root == NULL) {
            return;
        }
        ans[lvl].push_back(root->val);
     LevelOrder(root->left,ans,lvl+1);
      LevelOrder(root->right,ans,lvl+1);

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        int lvl = levels(root);
        for(int i = 1;i<=lvl;i++) {
         vector<int>v;
        ans.push_back(v);
    }
     LevelOrder(root,ans,0);

    return ans;


        
    }
};