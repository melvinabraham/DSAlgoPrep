	class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
  
    	if(nums.size() == 0)
    		return {-1,-1};

  		int left = 0;
		int right = nums.size() - 1;

		

		while(left <= right) {

			int middle = left + (right - left) / 2;

			if(nums[middle] == target) {

				int i = middle;
				int j = middle;

				while(i >= 0 && nums[i] == nums[middle])
					--i;
				while(j < nums.size() && nums[j] == nums[middle])
					++j;
				return {i,j};
			}

			else
				if(nums[middle] < target) {
					left = middle + 1;
				}
			else
				right = middle - 1;
		}

		

		return {-1, -1};


    }
};