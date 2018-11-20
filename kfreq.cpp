class Solution {
public:

	bool compare(pair<int,int> p1  , pair<int,int> p2) {
		if(p1.second == p2.second)
			return p1.first > p2.first;
		return p1.second > p2.second;
	}

    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map <int,int> hash;
        for(int i = 0; i < nums.size(); ++i)
            ++hash[nums[i]];
        vector<pair<int,int> > freq_array (hash.begin(),ha.end());

     	sort(freq_array.begin() , freq_array.end(), compare);

     	vector <int> result;

     	while(k--) {
     		result.push_back(freq_array.top().second);
     		freq_array.pop();
     	}

        
    }
};