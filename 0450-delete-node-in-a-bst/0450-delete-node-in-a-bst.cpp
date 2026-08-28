
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return root;
        // case 1 : 0 child 
        if(root->val == key) {
            if(root->left == NULL && root->right == NULL) {
                return NULL;
            }
         // case 2 : 1 child  
            else if (root->left == NULL && root->right!=NULL) {
                return root->right;
            }

            else if (root->left != NULL && root->right==NULL) {
                return root->left;
            }
    // case 3 : when 2 children
            else if (root->left!=NULL && root->right !=NULL) {
               TreeNode * temp  = root->left;
               // go to inorder pred or suc 
               // then delete the pred or suc after replacing 
               while(temp->right!=NULL) {
                temp = temp->right;
               }
               root->val  = temp->val;
               root->left = deleteNode(root->left,temp->val);
               
            }
        }

      else  if(root->val>key) {
            root->left = deleteNode(root->left,key);
        }

        else {
            root->right = deleteNode(root->right,key);
        }

        return root;

    }
};