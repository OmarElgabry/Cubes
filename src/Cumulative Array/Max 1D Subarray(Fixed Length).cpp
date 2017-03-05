#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	const int n = 10, l = 3;	// given l <= n
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 1; i < n; i++){
		arr[i] += arr[i - 1];
	}

	int mx = arr[l - 1];
	for (int i = l; i < n; i++){
		mx = max(arr[i] - arr[i - l], mx);
	}

	cout << mx << endl;

	return 0;
}