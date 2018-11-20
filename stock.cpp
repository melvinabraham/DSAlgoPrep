class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int global_max = 0, local_max = 0;
        for(int i = 0; i < prices.size(); ++i) {
  			local_max = 0;
  			for(int j = i + 1; j < prices.size(); ++j) {
  				local_max = max(local_max,a[j] - a[i]);
  			}
  			global_max += local_max;
        }   
 	
 		return global_max;

     }


};