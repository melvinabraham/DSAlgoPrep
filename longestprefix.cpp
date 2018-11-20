string longestCommonPrefix(vector<string>& strs) {
        
        

			if(strs.empty())	return "";
			word1 = strs[0]
			if(word1 == "") return "";

			for(int i = 1; i < strs.size(); ++i)	{
				string word2 = strs[i];
				if(strs[2] == "")	{
					break;
				}
				int index = 0; 
				while(word1[index] == word2[index])	{
					index++;
				}
				word1 = word1.substr(0,index);
			}
		 
	        
	        
	        return subs;
	        
        
        
    }