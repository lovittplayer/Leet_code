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
      void pathSum(TreeNode* root, int targetSum,
             vector<vector<int>>& ans, vector<int> v) {

    if(root == NULL) return;

    v.push_back(root->val);
    targetSum -= root->val;

    if(root->left == NULL && root->right == NULL) {
        if(targetSum == 0) {
            ans.push_back(v);
        }
        return;
    }

    pathSum(root->left, targetSum, ans, v);
    pathSum(root->right, targetSum, ans, v);
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> v;
        pathSum(root,targetSum,ans,v);
        return ans;
    }
};