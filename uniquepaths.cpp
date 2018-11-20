class Solution {
public:
    int uniquePaths(int m, int n) {

	    	if(m < 0 || n < 0)
	    		return 0;
	    	if(m == 1 || n == 1)
	    		return 1;
	    	
	    	int path[m][n];

	    	for(int i = 0; i < m; ++i) 
	    		path[i][0] = 1;

	    	for(int j = 0; j < n; ++j)
	    		path[0][j] = 1;

	    	for(int i = 0; i < m; ++i)
	    		for(int j = 0; j < n; ++j)
					path[i][j] = path[i - 1][j] + path[i][j - 1];

			return path[m - 1][n - 1];    			
	   

    }
};