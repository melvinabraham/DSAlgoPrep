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


	void inorder(TreeNode *root, vector <int> &v) {

 		if (node == NULL) return true;
        if (!validate(node->left, prev)) return false;
        if (prev != NULL && prev->val >= node->val) return false;
        prev = node;
        return validate(node->right, prev);


	}



    bool isValidBST(TreeNode* root) {
  

    	if(root == NULL || root->left == NULL && root->right == NULL)
    		return true;

    	vector <int> elements;

    	inorder(root, elements);


    	for(int i = 1; i < elements.size(); ++i) {
    		if(elements[i] < elements[i - 1])
    			return false;
    	}

    	return true;

    }
};