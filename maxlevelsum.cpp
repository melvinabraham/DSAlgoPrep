// namespace std have been included for this problem.

// Add any helper functions(if needed) above.

int bfs(treeNode* root, queue<treeNode*> &q) {
    
    int result = -1;
    int level = -1;
   	int maxcount = 0; 
    while(!q.empty()) {
        ++level;
    	int count = q.size();
    	int lcount = 0;
    	for(int i = 0; i < count; ++i) {
    		
    		treeNode *node = q.front();
    		lcount += node->value;
    		q.pop();

    		if(node->left != NULL)
    			q.push(node->left);
    	
    		if(node->right != NULL)
    			q.push(node->right);
		}
	
	if(maxcount > lcount) {
	    result = level;
        maxcount = lcount;    
		}
	}
	
	return result;
}



int find_max_sum_level(treeNode* root)
{
    queue<treeNode*> q;
    if(root == NULL)
    	return -1;
    if(root->left == NULL && root->right == NULL)
    	return root->value;
    q.push(root);
    return bfs(root, q, level);
    
}