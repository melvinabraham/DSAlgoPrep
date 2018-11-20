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
    vector <int> v;
    vector<int> inorderTraversal(TreeNode* root) {

   		if(root->left != NULL)
   			inorderTraversal(root->left);
   		cout<<root->val;
   		if(root->right != NULL)
   			inorderTraversal(root->right);
                     
        
    }
};