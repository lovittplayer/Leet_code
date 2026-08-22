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
    
    TreeNode* searchBST(TreeNode* root, int val) {
         if(root == NULL) return NULL;
        if(root->val == val) return root;
         bool flag = true;
            TreeNode * lst =    searchBST(root->left,val);
            TreeNode *rst  = searchBST(root->right,val);
       
        if(root->val>val) {
             return lst; 
       
        }
        else {
           return rst;
        }

        
    }
};