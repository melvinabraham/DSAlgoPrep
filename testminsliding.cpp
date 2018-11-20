class Solution
{
  public:
	string minWindow(string s, string p)
	{

		if (s.size() == 0 || p.size() == 0)
			return "";

		int flag = 0;
		unordered_map<char, int> hash_pattern;

		for (int i = 0; i < p.size(); ++i)
			++hash_pattern[p[i]];

		int counter = hash_pattern.size();

		int start = 0;
		int end = 0;

		int wbegin = 0;

		int wlength;
		wlength = INT_MAX;

		string subs = "";

		while (end < s.size())
		{

			char found = s[end];
			cout << s.substr(start, end - start + 1) << endl;

			if (hash_pattern.count(found) && hash_pattern[found] > 0)
			{

				--hash_pattern[found];

				if (hash_pattern[found] == 0)
					--counter;
			}

			while (counter == 0)
			{

				if (end - start < wlength)
				{

					flag = 1;
					wlength = end - start;
					subs = s.substr(start, wlength + 1);
				}
                
            

				char reducefromleft = s[start];
                
                    if(hash_pattern[reducefromleft] == 0)
						++counter;

				if (hash_pattern.count(reducefromleft))
				{
					++hash_pattern[reducefromleft];
                    counter++;
                    
				}

				++start;
			}

			++end;
		}

		if (flag == 0)
			subs = "";

		return subs;
	}
};