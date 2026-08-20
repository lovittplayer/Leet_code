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
   TreeNode * const_Tree(vector<int>& in,int inlo , int inhi, vector<int>& post,int postlo,int posthi) {
    if(postlo>posthi) {
        return NULL;
    }
    TreeNode * root = new TreeNode(post[posthi]);
    if(posthi == postlo) {
       return root;
    }
    
    int i = inlo;
    while(i<=inhi) {
        if(in[i]==post[posthi]) {
            break;
        }
        i++;
    }
    int rc = inhi - i;
    int lc =  i - inlo;
    root->left =  const_Tree(in,inlo,i-1, post,postlo,postlo+lc-1);
     root->right =  const_Tree(in,i+1,inhi,post,postlo+lc,posthi-1);
     return root;
   }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int n = in.size();
       TreeNode* root =  const_Tree(in,0,n-1,post,0,n-1);
       return root;
    }
};