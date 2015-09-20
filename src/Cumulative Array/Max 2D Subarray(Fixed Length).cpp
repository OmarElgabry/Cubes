#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

const int n = 4;
int arr[n][n];

int sum(int &i, int &j, int &k, int &l){

	int sum = arr[k][l];

	if (i != 0 && j != 0){
		sum += arr[i - 1][j - 1];
	}
	if (i > 0){
		sum -= arr[i - 1][l];
	}
	if (j > 0){
		sum -= arr[k][j - 1];
	}
	return sum;
}

int main(){

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

	// compute the max rectangle with size 2 X 3
	int k = 1, l = 2, mx = -1;
	for (int iu = 0, id = k; id < n; iu++, id++){
		for (int jf = 0, jb = l; jb < n; jf++, jb++){
			mx = max(mx, sum(iu, jf, id, jb));
		}
	}

	cout << mx << endl;

	return 0;
}