class Solution {
public:
    string minWindow(string s, string p) {
        
        
	if(s.size() == 0 || p.size() == 0)
		return "";

	map <char,int> hash_pattern;

	for(int i = 0; i < p.size(); ++i)
		++hash_pattern[p[i]];


	int counter = p.size();

	int start = 0;
	int end = 0;

	int len = INT_MAX;

	string subs;
	int head = 0;

	while(end < s.size()) {

			if(hash_pattern.count(s[end]) && hash_pattern[s[end]]-- > 0) {
				--counter;
				// --hash_pattern[s[end]];
			}


			while(counter == 0) {

				if(len > end - start + 1)
					len = end - (head = start) + 1;

				if(hash_pattern.count(s[start]) && hash_pattern[s[start]]++ == 0) {
					++counter;
					// ++hash_pattern[s[start]];
				}

				++start;

			}

		++end;
	}

    return s.substr(head, len);
        
        
        
    }
};