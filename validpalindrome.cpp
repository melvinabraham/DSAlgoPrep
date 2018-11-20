class Solution {
public:
    bool isPalindrome(string s) {
  		int k = 0;
    	for(int i = 0; i <s.size(); ++i) {
    		if(isalpha(s[i]))
    			s[k++] = tolower(s[i]);
    	}

    	for(int i = 0, int j = k-1; i < k/2, j >=0; ++i,--j)
    		if(a[i] != a[j])
    			return false;


    }
};