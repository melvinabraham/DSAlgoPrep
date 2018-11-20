
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
    TreeNode* invertTree(TreeNode* root) {
        
        if(root == NULL)
        	return NULL;

  		if(root->left == NULL && root->right == NULL)
  			return root;

  		TreeNode *temp = root->left;

  		root->left = invertTree(root->right);
  		root->right = invertTree(temp);
      
  		return root;
    }
};




Iterative:

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
      stack <TreeNode*> s;

      if(root == NULL)
      	return NULL;

      s.push(root);

      while(s) {

      	TreeNode *t = s.pop();
      	if(t) {

      		s.push(t->left);
      		s.push(t->right);
      		swap(t->left, t->right);
      	}
      }

    }
};

