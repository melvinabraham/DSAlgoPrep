class Solution {
public:
    int titleToNumber(string s) {
  
    	int col = 0;
    	int n = s.size();
    	unordered_map <char,int> hash;

    	for(int i = 0; i <26; ++i)
    		hash['A' + i] = i;

    	for(int i = 0; i < n; ++i){
    		col*=26;
    		col+=hash[vec[i]];
    	}


    	return col;

    }
};