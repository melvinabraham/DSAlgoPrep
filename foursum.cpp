class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {

    	unordered_map<int,int> hash1,hash2;

    	for(int i = 0; i < A.size(); ++i )
    		for(int j = 0; j < B.size(); ++j)
    			++hash1[-(A[j] + B[i])];

    	int count = 0;
    	for(int i = 0; i < A.size(); ++i) 
    		for(int j = 0; j < B.size(); ++j) 
    			 ++hash2[C[i] + D[j]];
    			


    	return count;

        
    }
};