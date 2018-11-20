#include<iostream>
#include<string>
#include<map>
using namespace std;

int	main(int argc, char const *argv[])
{
	map <char,int> hash;
	hash['I'] = 1;
	hash['V'] = 5;
	hash['X'] = 10;
	hash['L'] = 50;
	hash['C'] = 100;
	hash['D'] = 500;
	hash['M'] = 1000;

	string input;
	cin>>input;
	int sum = 0;
	for(int i = 0; i < input.size(); ++i)	{
		sum+=hash[input[i]];
		if(input[i] == 'I' && (input[i+1] == 'X' || input[i+1] == 'V' ))
			sum-=2;
	
		if(input[i] == 'X' && (input[i+1] == 'L' || input[i+1] == 'C' ))
			sum-=20;

		if(input[i] == 'C' && (input[i+1] == 'D' || input[i+1] == 'M' ))
			sum-=200;

	}

	return sum;

}