
class Solution {
public:

int traverse(TreeNode * root,int &maxdia) {
    if(root == NULL) return 0;
  int  dia = levels(root->left) + levels(root->right);
    maxdia = max(dia,maxdia);
    traverse(root->left,maxdia);
    traverse(root->right,maxdia);
    return maxdia;
}
int levels(TreeNode * root) {
    if(root == NULL) return 0;
    TreeNode* right = root->right;
    TreeNode * left = root->left;
    return 1 + max(levels(right),levels(left));
}
    int diameterOfBinaryTree(TreeNode* root) {
       int maxdia = 0; // reintialize 
        return traverse(root,maxdia);
    }
};