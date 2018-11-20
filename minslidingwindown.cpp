string minwindow(string s, sring p) {


		unordered_map<char, int> hash_pattern;
        
        // initialize frequency table for t
        for(char c : t){
            hash_pattern[c]++;
        }
        
        // initialize sliding window
        int start = 0, end = 0;
        int counter = hash_pattern.size();
        int len = INT_MAX;
        
        string result = "";
        
        unordered_map <char, int> hash_string;

        while(end < s.size()) {

        	char enchar = s[endchar];

        	if(hash_pattern.count(enchar) && hash_pattern[enchar] != 0) {
        		
        	}




        }






}