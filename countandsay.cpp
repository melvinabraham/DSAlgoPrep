class Solution {
public:
    string countAndSay(int n) {
        
        char count_string;
        string s = "1", st = "";
        for( int i = 0; i < n ; ++i)	{

        	if( i != 0)	{
        		s = st;
        		st = "";
        	}

        	char a = s[0];
        	int count = 1;

        	for(int j = 1; j<s.size(); ++j)	{

        		if( a == s[i])
        			++count;
        		
        		else	{
        			
        			count_string = '0' + count;
        			st = st + count_string + a;
        			count = 1;
        		}

        	}

        	count_string = '0' + count;
        	st = st + count_string + a;

        }
        
        return st;
                
    }
};