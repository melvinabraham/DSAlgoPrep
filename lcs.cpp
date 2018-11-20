class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        int count =1;
        int maxcount = 1;
        // int prev = nums[0];
        set <int> s;

        for(int i = 0; i < nums.size(); ++i)
        	s.insert(nums[i]);

        auto p = s.begin();
        int prev = *p;

        for(auto i = s.begin(); i != s.end(); ++i) {

        	if(*i == prev + 1 ) {
                ++count;
            }

            else {
                maxcount = max(maxcount, count);
                count = 1;
            }
                prev = *i;
        }

        maxcount = max(count, maxcount);

        return maxcount;


    }
};