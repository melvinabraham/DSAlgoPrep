#include<iostream>
#include<map>
using namespace std;

int main() {

	map <int,int> hash;
	string nums = "hello";
	for(int i = 0; i < nums.size(); ++i) {

		++hash[nums[i]];

	}

	for(auto pr: hash)
		if(pr.second == 1)
			return pr.first;

	return -1;
}