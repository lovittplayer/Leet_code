
class Solution{
    public :
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
TreeNode *insertIntoBST(TreeNode *root, int val)
{
    TreeNode *temp = new TreeNode(val);
    if (root == NULL)
    {
        return temp;
    }
    insert(root, val);
    return root;
}
}
;
