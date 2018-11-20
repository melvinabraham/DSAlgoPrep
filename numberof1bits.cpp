#include<iostream>
using namespace std;

int main() {
	uint32_t n = 1;
	int count = 0;
	while(n!=0){
		++count;
		n=n&(n-1);
	}
	cout<<count;
}