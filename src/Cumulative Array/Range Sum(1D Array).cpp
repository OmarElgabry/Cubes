#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	const int n = 5;
	int arr[n + 1] = {0, 1, 3, 4, 2, 5 };		// arr[0]  = 0 is added since the array is 1-indexed. 		
	int cum[n + 1];								// It can be zero-indexed, but, you need to handle the case when start = 0.

	for (int i = 0; i <= n; i++){
		cum[i] = 0;
	}

	// the comulative array can be computed in arr[] itself instead of using cum[]
	for (int i = 1; i <= n; i++)
		cum[i] = cum[i - 1] + arr[i];

	int start = 2, end = 5;		// start and end values are from [1, n]
	cout << cum[end] - cum[start - 1] << endl;

	return 0;
}
