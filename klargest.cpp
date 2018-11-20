class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

    	if(k > nums.size())
    		return -1;

    	if(nums.size() == 0)
    		return 


  		sort(nums.begin(), nums.end(), greater<int>);

  		return nums[k - 1];


    }
};