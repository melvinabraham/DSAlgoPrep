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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(root == NULL)
            return {};
        
        if(root->left == NULL && root->right == NULL)
            return {{root->val}};
  
    	queue <TreeNode*> q;
    	vector<vector<int>> v;
    	q.push(root);
    	int i = 0;
        
    	while(!q.empty()) {
    		int size = q.size();
    		v.push_back(vector<int>());
    		for(int j = 0; j < size; ++j) {
    				v[i].push_back(q.front()->val);
                    if(q.front()->left != NULL)
    				    q.push(q.front()->left);
                    if(q.front()->right != NULL)
    				    q.push(q.front()->right);
    	            q.pop();
    		}
    		++i;
    	}

    	return v;

    }
};




vector<vector<int>> ret;

void buildVector(TreeNode *root, int depth)
{
    if(root == NULL) return;
    if(ret.size() == depth)
        ret.push_back(vector<int>());
    
    ret[depth].push_back(root->val);
    buildVector(root->left, depth + 1);
    buildVector(root->right, depth + 1);
}

vector<vector<int> > levelOrder(TreeNode *root) {
    buildVector(root, 0);
    return ret;
}

