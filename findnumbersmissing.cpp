class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

    	if(nums.size() == 0)
    		return {};

    	if(nums.size() == 1)
    		return {1};
        
    	vector<int> v;
    	for(int i = 0; i < nums.size(); ++i) {
    		if(nums[abs(nums[i]) - 1] > 0)				// Imagine there is no 3 in the list (1,1,2). Now nums[3 - 1] will be the only number that will be positive,
    													// since all other numbers would have been touched already. Hence the list will be like (-1, -1, 2).
    													// Thus position of 2 + 1 = 3 is a number that is missing
    			nums[abs(nums[i]) - 1] *= -1;
    	}

    	for(int i = 0; i < nums.size(); ++i){
    		if(nums[i] > 0)
    			v.push_back(i + 1);
    	}

    	return v;
    }
};