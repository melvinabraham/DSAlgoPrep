#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
	
	vector <int> g1 ={6,2,1,9,2};
	vector<int>::iterator it,jt;
	for(int i=0;i<g1.size();++i)	{
		cout<<g1[i];
		}
	

	return 0;
}