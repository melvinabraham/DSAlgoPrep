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

	void inorder(TreeNode *node, vector<int>& v) {
		if(node == NULL)
			return;

		inorder(node->left, v);

		v.push_back(node->val);

		inorder(node->right, v);

	}

    int kthSmallest(TreeNode* root, int k) {
        
    	vector<int> v;

    	inorder(root, v);

    	return v[i];

    }
};