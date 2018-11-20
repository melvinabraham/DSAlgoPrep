class Solution {
public:
    int maxArea(vector<int>& height) {
  

    	if(height.size() < 2)
    		return 0;

    	int global = 0;

    	int i = 0;
    	int j = height.size() - 1;

    	while(i < j) {

    		int local = min(height[i], height[j]) * (j - i);
    		global = max(global, local);

    		if(height[i] < height[j])
    			++i;
    		else
    			--j;
    	}

    	return global;
    }
};