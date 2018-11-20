class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
  
    	digits[digits.size() - 1] += 1;
    	int carry = 0;
    	vector<int>::iterator it;
    	
    	for(it = digits.end() - 1; it >= digits.begin(); ++it)	{

    		*it = *it + carry;
    		if(*it > 9)	{
    			carry = 1;
    			*it = 0;
    		}
    		else	{
    			carry = 0;
    			break;
    		}

    	}

    	if(carry == 1)	{
    		digits.insert(digits.begin(),1);
    		digits[1] = 0;
    	}

    	return digits;


    }
};