#include<iostream>
using namespace std;

int product(int sum, int m, int n) {

	if(n == 0)
		return sum;

	return m + product(sum, m, n-1);

}


int main() {

	int a = 5;
	int b = 1;	
	int sum = 0;
	cout<<product(sum, max(a,b), min(a,b));

	return 1;
}



// Actual

int minProduct(int a, int b) {
2 int bigger = a < b ? b : a;
3 int smaller = a < b ? a : b;
4 return minProductHelper(smaller, bigger);
5 }
6
7 int minProductHelper(int smaller, int bigger) {
8 if (smaller == 0) return 0;
9 else if (smaller == 1) return bigger;
10
11 int s = smaller » 1; II Divide by 2
12 int half Prod = minProductHelper(s, bigger);
13
14 if (smaller % 2 == e) {
15 return half Prod + half Prod;
16 } else {
17 return half Prod + half Prod + bigger;
18 }
19 } 