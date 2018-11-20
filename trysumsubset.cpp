#include<iostream>
using namespace std;

bool subsetsum(int a[], int n , int sum) { 
	if(sum ==0)
		return true;

	if(n == 0 && sum!= 0)
		return false;


	if(a[n - 1] > sum)
		return subsetsum(a, n - 1, sum);

	return subsetsum(a, n - 1, sum) || subsetsum(a, n - 1, sum - a[n - 1]);
}


int main() {

	int a[] = {5,3,1,7};

	cout<<subsetsum(a, 4, 14);

	return 0;
}


//

//@author Nishit Patira
class GFG {
	
	public static void main(String[] args) {
		int[] arr = {3,34,4,12,5,2};
		int sum = 100;
		System.out.println(isSubSetSum(arr, sum));
	}

	private static boolean isSubSetSum(final int[] arr, final int sum) {
		final Boolean[][] matrix = new Boolean[sum + 1][arr.length + 1];
		for (int i = 0; i <= sum; i++) {
			matrix[i][0] = false;
		}
		for (int i = 0; i <= arr.length; i++) {
			matrix[0][i] = true;
		}
		return isSubSetSumUtil(arr, matrix, sum, arr.length);
	}

	private static boolean isSubSetSumUtil(final int[] arr, final Boolean[][] matrix, int i, int j) {
		if (i < 0 || j < 0) {
			return false;
		}
		if (matrix[i][j] != null){
			return matrix[i][j];
		}
		matrix[i][j] = isSubSetSumUtil(arr, matrix, i, j-1) || isSubSetSumUtil(arr, matrix, i-arr[j-1], j-1);
		return matrix[i][j];
	}
}
