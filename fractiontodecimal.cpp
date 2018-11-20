class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
  
    	if(denominator == 0)
    		return "";

    	if(numerator%denominator == 0)
    		return to_string(numerator/denominator);
    	
    	if(numerator == 0)
    		return "0";


    	string s;

    	if(numerator < 0 ^ denominator < 0)
    		s+="-";

    	s += to_string(numerator / denominator);
    	s += ".";
    	string decimal_string;

    	unordered_map <int,int> hash;

   		long long r = numerator % denominator;

    	for(long long r = numerator % denominator; r ; r=r%denominator) {
			if (hash.count(r) > 0) {
				 hash.insert(hash[r], 1, '(');
				 s += ')';
				 break;
				 }
				 // the remainder is first seen
				 // remember the current position for it
				 hash[r] = s.size();
				 r *= 10;
				 // append the quotient digit
				 s += to_string(r / denominator);
				 }

    	}

    	return decimal_string;

    }
};