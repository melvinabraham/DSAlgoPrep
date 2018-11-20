class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        
        //	IDEA: 	Sort the array and iterate through every element one by one.
    	//			Say the first element is a. Now use a, and two pointers low and high such that low begins with  a + 1 and high begins with size - 1
   					// Calculate a + low + high

    	//	Edge cases

    	if(nums.size() = 0 || nums.size() < 3)
    		return {{}};

    	vector<vector<int>> result;
    	sort(nums.begin(), nums.end());

    	for(int i = 0; i < nums.size() - 2; ++i) {

    			int first = nums[i];

    			int low = i + 1;
    			int high = nums.size() - 1; 

    			while(low < high) {

    				if(first + nums[low] + nums[high] == 0) {
    					
    					vector<int> sequence;
    					sequence.push_back(first);
    					sequence.push_back(nums[low]);
    					sequence.push_back(nums[high]);
    					result.push_back(sequence);

    				}

    				else
    					if(first + nums[low] + nums[high] < 0) {
    						++low;
    					}
    				else
    					--high;

    				}
    			}


    	}
        
    return result;    
    
};