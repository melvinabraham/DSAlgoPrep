class Solution {
public:

	vector<string> res;

    void helper(string cur, int n, int m) {
    		
    	if(n == 0 && m == 0) {
    		res.push_back(cur);
    		return;
    	}


    	if(n > 0)
    		helper(cur + "(", n - 1, m + 1);
    	if(toclose > 1)
    		helper(cur + ")", n, , - 1);

    }	



    vector<string> generateParenthesis(int n) {

    	helper("", n, 0);
    	return res;

    }
};