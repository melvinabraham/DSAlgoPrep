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

	void inordersum(TreeNode* root, int &sum) {
		if(root->left == NULL && root->right == NULL)
			return;
		inordersum(root->left, sum);
		sum += root->val;
		inordersum(root->right, sum);
	}



    TreeNode* convertBST(TreeNode* root) {
        
        int sum = 0;
        inordersum(root, sum);

    }
};