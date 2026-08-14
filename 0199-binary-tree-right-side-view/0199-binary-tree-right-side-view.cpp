
class Solution {
public:
   int levels (TreeNode*root) {
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
   }
   void nthlevel(TreeNode*root,vector<int>&ans,int lvl,int currLvl) {
          if(root ==NULL) return;
          if(currLvl>lvl) return;
          if(lvl == currLvl) {
            ans[lvl] = root->val;
          }
          nthlevel(root->left,ans,lvl,currLvl+1);
          nthlevel(root->right,ans,lvl,currLvl+1);
   }
    vector<int> rightSideView(TreeNode* root) {
        
        int lvl = levels(root);
        vector<int>ans(lvl);
        for(int i = 0 ; i<lvl;i++) {
         nthlevel(root,ans,i,0);
        }

        return ans;
        
    }
};