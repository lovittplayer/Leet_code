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
TreeNode * const_tree(vector<int>& preorder,int preLo,int preHi,vector<int>& inorder,int inLo,int inHi) {
    if(inLo>inHi) return NULL;
    TreeNode * root = new TreeNode(preorder[preLo]);
    if(inLo == inHi) return root;
    int i  = inLo ;
    while(i<=inHi) {
        if(inorder[i]==preorder[preLo]) {
            break;
        }
        i++;
    }
    int leftCount = i - inLo;
    int rightCount = inHi - i;
    root->left = const_tree(preorder, preLo+1,preLo + leftCount,inorder,inLo,i-1);
    root->right =  const_tree(preorder,preLo+leftCount+1,preLo+leftCount+rightCount,inorder,i+1,inHi);
    return root;
}

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        TreeNode * root = const_tree(preorder,0,n-1,inorder,0,n-1);
        return root;


    }
};