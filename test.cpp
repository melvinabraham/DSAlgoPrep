#include <iostream>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
	string digits = "234";
	cout<<"Done";
	if (digits.size() == 0)
		return {};

	// digits -> 23456
	// hash -> "2" : "abc"
	unordered_map<string, string> hash;
	vector<string> mapping = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

	for (int i = 0; i < 10; ++i)
	{
		hash[to_string(i)] = mapping[i];
	}

	queue<string> q; // Queue for doing BFS
	string first_digit;
	first_digit = digits[0];
	string first_string = hash[first_digit];

	string first_char;
	
	for (int i = 0; i < first_string.size(); ++i)
	{
		first_char = first_string[i];
		q.push(first_char); // Pushing in initial values
		// cout<<"Pushing in: "<<first_char;
	}

	string second_char;

	for (int i = 1; i < digits.size(); ++i)
	{
		second_char = digits[i];
		string next_string = hash[second_char];
		// cout<<second_char<<" "<<next_string;
		int j = q.size();
		cout<<j;
		while (j > 0)
		{
				
			string bfs_string = q.front();
			q.pop();

			for (int k = 0; k < next_string.size(); ++k)
			{
				q.push(bfs_string + next_string[k]);
				cout<<"Combining "<<bfs_string + next_string[k]<<endl;
			}

			--j;
		}
	}

	vector<string> result;

	while (!q.empty())
	{
		result.push_back(q.front());
		q.pop();
	}

	return result;
}