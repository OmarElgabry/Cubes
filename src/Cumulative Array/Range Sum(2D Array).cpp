#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	const int n = 4;
	int arr[n][n];

	/*
		Test case:
		1  2  3  4
		5  1  2  4
		1  1  2  1
		3  2  1  1
	*/
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j]; // add any values

	// row accumulation
	for (int i = 0; i < n; i++)
		for (int j = 1; j < n; j++)
			arr[i][j] += arr[i][j - 1];

	// column accumulation
	for (int i = 0; i < n; i++)
		for (int j = 1; j < n; j++)
			arr[j][i] += arr[j - 1][i];

	// compute the sum in rectangle (i, j) & (k, l)
	int i = 1, j = 1, k = 2, l = 2;
	long long sum = arr[k][l];

	if (i != 0 && j != 0){
		sum += arr[i - 1][j - 1];
	}
	if (i > 0){
		sum -= arr[i - 1][l];
	}
	if (j > 0){
		sum -= arr[k][j - 1];
	}

	cout << sum << endl;

	return 0;
}
