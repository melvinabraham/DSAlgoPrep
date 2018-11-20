class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
            int i = 0, id = 0;
            for(int i = 0; i< nums.size(); ++i)    {
                if(nums[i] != val)   
                    nums[id++] = nums[i];
            }
        return id;
        
    }
};