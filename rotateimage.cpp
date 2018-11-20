class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
  
    		int n = matrix.size();

    		stack <int> st[n];

    		for(int i = 0; i < n; ++i)
    			for(int j = 0; j < n; ++j)
    				st[i].push(matrix[j][i]);

    		for(int i = 0; i < n; ++i) {
    			for(int j = 0; j < n; ++j) {
    				matrix[i][j] = st[i].top();
    				st.pop();
    			}
    		}

    }
};