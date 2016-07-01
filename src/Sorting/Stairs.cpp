#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){

	const int n = 13, MAX = 100000;
	int arr[n] = { 8, 23, 26, 8, 15, 13, 35, 36, 28, 8, 4, 33, 6 };
	int cunt[MAX], sum = 0;

	for (int i = 0; i < MAX; i++){
		cunt[i] = 0;
	}

	int mx = -1;
	for (int i = 0; i < n; i++){
		cunt[arr[i]]++;
		mx = max(arr[i], mx);
	}

	for (int i = 0; i <= mx; i++){
		if (cunt[i]){
			cout << i << " ";
			cunt[i]--;
			sum++;
		}
	}

	for (int i = mx - 1; i >= 0; i--){
		if (cunt[i]){
			cout << i << " ";
			sum++;
		}
	}

	cout << endl;
	cout << "min number of elements: " << n - sum << endl;

	return 0;
}
