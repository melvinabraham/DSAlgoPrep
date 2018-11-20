class Solution {
public:
    int findDuplicate(vector<int>& nums) {
  
   		for(int i = 0; i < nums.size(); ++i) {
   			if(nums[i] < 0)
   				continue;

   			if(nums[nums[i]] < 0)
   				return nums[i];
   			else
   				nums[nums[i]] *= -1;
   		}

   		return -1;

    }
};