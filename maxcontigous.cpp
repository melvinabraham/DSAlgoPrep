#include<iostream>
#include<algorithm>
using namespace std;
int main() {

	int arr[] = {-2,-3,4,-1,-2,1,5,-3};
	int local = arr[0], global_sum = arr[0];
	for(int i = 1; i < 8; ++i) {
		local = max(local + arr[i], arr[i]);
		cout<<local<<endl;
		global_sum = max(local, global_sum);
	}

	cout<<global_sum;
}