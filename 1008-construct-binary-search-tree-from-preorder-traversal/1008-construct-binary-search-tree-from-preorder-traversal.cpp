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
void insert(TreeNode * root, int val){
     TreeNode *temp = new TreeNode(val);
if (root->val > val)
{
    if (root->left == NULL)
    {
        root->left = temp;
        return;
    }
    else
    {
        insert(root->left, val);
    }
}
else
{
    if (root->right == NULL)
    {
        root->right = temp;
        return;
    }
    else
    {
        insert(root->right, val);
    }
}

return;
}
    TreeNode* bstFromPreorder(vector<int>& pre) {
        TreeNode * root = new TreeNode(pre[0]);
        for(int i = 1 ; i<pre.size();i++) {
            insert(root,pre[i]);
        }

        return root;
        
    }
};