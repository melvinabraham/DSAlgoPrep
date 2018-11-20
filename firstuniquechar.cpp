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

	TreeNode* constructBST(vector<int>& nums, int left, int right) {
		if(left > right)
			return NULL;

		int i = left + (right - left)/ 2;
		TreeNode *newnode = new TreeNode(nums[i]);

		newnode->left = constructBST(nums, left, i - 1);
		newnode->right = constructBST(nums, i + 1, right);

		return newnode;
	}



    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
    	int left = 0, right = nums.size() - 1;

    	return constructBST(nums, left, right);
    }
};