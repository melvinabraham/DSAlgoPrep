#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int>& A, int target)	{
	auto low = A.begin(); 
	auto high = A.end() - 1;
	return(lower_bound(low,high,target))
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