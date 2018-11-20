class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int global_max = nums[0];
        int local_max = nums[0];

        for(int i =1; i < nums.size(); ++i)	{
        		local_max = max(nums[i],max + nums[i]);
        		if(local_max > global_max)
        			global_max = local_max;
        }
        
    }
};