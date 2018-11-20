class Solution {
public:
    int missingNumber(vector<int>& nums) {
  		
    	int n = nums.size();
        
    	if(n == 0)
    		return -1;

    	n = n * (n+1) / 2;
        int sum = 0;
        cout<<n;
    	for(int i = 0; i < nums.size(); ++i) {
    		sum =  sum + nums[i];
    	}

    	return n - sum;
    }
};


// Better solution with XOR

class Solution {
public:
    int missingNumber(vector<int>& nums) {
  		
    	int result = nums.size();
        for(int i = 0; i < nums.size(); ++i) {
    		result =  result ^ i ^ nums[i];
    	}

    	return result;
    }
};

