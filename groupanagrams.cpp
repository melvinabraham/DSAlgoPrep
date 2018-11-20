class Solution {
public:

	bool checkanagram(string a, string b) {

	if(a.size() != b.size())
		return false;

	int sum = a[0] ^ b[0];

	for(int i = 1; i < a.size(); ++i)
		sum ^= a[i] ^ b[i];

	if(sum == 0)		// Meaning the substrings are anagrams of each other 
		return true;
	else
		return false;
	
	}



    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n = strs.size();			// Size

    	if(n == 0)
    		return {{}};
    	if(n == 1)
    		return {{strs[0]}};

    	
    	vector<vector<string>> result;
    	vector<int> visited(n, 0);

    	for(int i = 0; i < n; ++i) {
    		if(visited[i])
    			continue;

    		result.push_back(vector<string>());
    		result[i].push_back(strs[i]);

    		for(int j = i + 1; j < n; ++j) {

    			if(checkanagram(strs[i], strs[j])) {
    				result[i].push_back(strs[j]);
    				visited[j] = 1;
    			}

    		}
        }

    	return result;

    }
};



!!!!!!!!!!!!!!!!!!!!!!      ACTUAL SOLTUION !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!11

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> res;

        unordered_map <string, vector<string>> map;

        for(auto s: strs) {
            string t = s;
            map.push_back[t];
        }

        res.reserve(map.size());

        for(auto i: map) {
            vector<strings> v = i.second;
            res.push_back(v);
        }

        return res;

    }
};