#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>& A, int target)	{
	auto low = A.begin(); 
	auto high = A.end() - 1;
	int middle;
	while(low <= high)	{
		auto middle = low + (high - low)/2;
		if(*middle == target) 
			return distance(A.begin(),middle);

		if(*middle < target)
			low = 	middle + 1;
		else
			high = middle - 1;
	}

	return -1;

}


int main()	{

	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(8);
	v.push_back(10);
	v.push_back(15);
	int out = BinarySearch(v,10);
	cout<<out;

	return 0;
}