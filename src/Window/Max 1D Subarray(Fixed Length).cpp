#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	const int n = 10, l = 3; // given l <= n
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int sum = 0;
	for (int i = 0; i < l; i++){
		sum += arr[i];
	}

	int mx = sum;
	for (int i = 1; i < n - l + 1; i++){
		sum = sum - arr[i - 1] + arr[i + l - 1];
		mx = max(sum, mx);
	}

	cout << mx << endl;

	return 0;
}