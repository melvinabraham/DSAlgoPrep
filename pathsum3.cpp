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
    int pathSum(TreeNode* root, int sum) {

    	if(root == NULL)
    		return -1;
    	
    	stack <TreeNode*> s;
    	s.push(root);
    	int value = 0;
    	int count = 0;
    	while(s) {

    		TreeNode* node = s.pop(); 
    		value = value + node->val;

    		if(sum == value) {
    			++count;
    			value = node->val;
    		}

    		if(value > sum) {
    			value
    		}

    	}

        
    }
};