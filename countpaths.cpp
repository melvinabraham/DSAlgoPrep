#include<climits>
// namespace std have been included for this problem.
#include<vector>
// Add any helper functions(if needed) above.
#include<iostream>
using namespace std;

int helper(int m, int n, vector<vector<int>> dp ) {
    
    if(m == 0 || n == 0)
        return dp[m][n];
        
    if(dp[m][n] == -1)    
        dp[m][n] = helper(m-1,n,dp) + helper(m,n-1,dp);
    
    return dp[m][n];
    
}



int count_paths(int rows, int cols)
{

    vector<vector<int>> dp(rows, vector<int>(cols,-1));
    dp[0][0] = 1;
    // cout<<dp[3][3];
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j) {
            if(i == 0 || j == 0)
                dp[i][j] = 1;
        }
    }
    return helper(rows - 1, cols -1, dp);
    // return 1;
}