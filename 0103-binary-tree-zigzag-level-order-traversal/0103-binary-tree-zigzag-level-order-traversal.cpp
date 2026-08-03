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
    void LevelOrder(TreeNode* root,vector<int>&v, vector<vector<int>>&ans,int lvl,int n) {
        if(root == NULL) {
            return;
        }
        if(lvl%2 != 0) {
             LevelOrder(root->left,v,ans,lvl,n+1);
          LevelOrder(root->right,v,ans,lvl,n+1);

        }

        else {
             LevelOrder(root->right,v,ans,lvl,n+1);
             LevelOrder(root->left,v,ans,lvl,n+1);
        }
    
        if(lvl == n) {
            v.push_back(root->val);
            return;
        }
        

    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
             
        vector<vector<int>>ans;
        int lvl = levels(root);
        for(int i = 1;i<=lvl;i++) {
         vector<int>v;
       LevelOrder(root,v,ans,i,1);
        ans.push_back(v);
    }

    return ans;
        
    }
};