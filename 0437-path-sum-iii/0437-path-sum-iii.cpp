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
    void helper(TreeNode* root, long long targetSum, int &ans) {
    if (root == NULL) return;

    targetSum -= (long long)(root->val);

    if (targetSum == 0) {
        ans++;
    }

    helper(root->left, targetSum, ans);
    helper(root->right, targetSum, ans);
}

int pathSum(TreeNode* root, int targetSum) {
    if (root == NULL) return 0;

    int ans = 0;

    helper(root, (long long)(targetSum), ans);

    ans += pathSum(root->left, (long long) (targetSum)) + pathSum(root->right,(long long) (targetSum));;
   

    return ans;
}
};