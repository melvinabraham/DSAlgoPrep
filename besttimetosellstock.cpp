class Solution {
public:
    int maxProfit(vector<int>& prices) {
    	
    	int global_p = 0, local_p = 0;
    	for(int i = 0; i < prices.size(); ++i)	{

    		for(int j = i+1 ; j < prices.size(); ++j)	{

    			if(a[j] > a[i] > local_p)
    				local_p = a[j] - a[i];

    		}

    		if(local_p > global_p)
    			global_p = local_p;

    	}

    	return global_p;

    }
};