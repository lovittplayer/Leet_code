
class Solution {
public:
int maxdia = 0;
int traverse(TreeNode * root) {
    if(root == NULL) return 0;
  int  dia = levels(root->left) + levels(root->right);
    maxdia = max(dia,maxdia);
    traverse(root->left);
    traverse(root->right);
    return maxdia;
}
int levels(TreeNode * root) {
    if(root == NULL) return 0;
    TreeNode* right = root->right;
    TreeNode * left = root->left;
    return 1 + max(levels(right),levels(left));
}
    int diameterOfBinaryTree(TreeNode* root) {
        maxdia = 0; // reintialize 
        return traverse(root);
    }
};