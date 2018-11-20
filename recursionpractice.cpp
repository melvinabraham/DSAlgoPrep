#include<iostream>
#include<ctype.h>
#include<string>
using namespace std;



string rec(string s) {

	if(s.size() == 1 || s == "")
		return s;
	
	if(s[0] == s[1])  {
		
		return s.substr(0,1) + "*" + rec(s.substr(1,s.size()));
	}

	else
		return s.substr(0,1) + rec(s.substr(1,s.size()));
}


int main()	{

	cout<<rec("Hello");
	return 0;
}
