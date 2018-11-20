/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
  
  		return isSymmetrichelper(root->left,root->right);      
    }

    bool isSymmetrichelper(TreeNode* left,TreeNode *right)	{
    	if(left == NULL && right == NULL)
    		return true;

    	if(left == NULL || right == NULL)
    		return false;

    	if(left->val != right-> val)
    		return false;

    	return isSymmetrichelper(left->left,right->right) && isSymmetrichelper(left->right,right->left);
    }
};