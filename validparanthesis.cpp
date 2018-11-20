class Solution {
public:
    bool isValid(string s) {
  
    	if (s == "")
    		return true;
    	stack <char> k;
    	char c;
    	for(int i = 0; i < s.size(); ++i)	{
    		if(s[i] == ')' || s[i] == '}' || s[i] == ']')	{
    			if(k.empty())	{
    				return false;
    			}
  
    			if(s[i] == ')' ||)	{
    				c = '(';
    			}
    			else
    				if(s[i] == '}')	{
    					c = '{';
    				}
    				else	{
    					c = '[';
    				}

  	  		
    			if(c != k.top())	{
    				return false;

    			}
    			k.pop();

  	  		}

  	  		else	{
  	  			k.push(s[i]);
  	  		}
  		
    	}

    	return true;



    }
};