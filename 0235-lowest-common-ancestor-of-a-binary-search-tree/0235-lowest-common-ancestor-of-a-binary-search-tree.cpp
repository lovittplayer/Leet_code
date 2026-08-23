
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(root==q || root == p) return root;
       int a = max(p->val,q->val);
       int b = min(p->val,q->val);
       if(root->val>b && root->val<a) return root;
       else if(root->val>b && root->val>a) return lowestCommonAncestor(root->left,p,q);
       else return lowestCommonAncestor(root->right,p,q);
    }
};