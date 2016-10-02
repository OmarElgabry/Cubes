#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	const int n = 10;
	int arr[n] = { 3, 1, 0, 1, 4, 8, 11, 4, 34, 2 };

	// Swapping only adjacent elements
	for (int i = 0; i < n; i++){
		for (int j = 0; j + 1 < n; j++){
			if (arr[j] > arr[j + 1]){
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	// Swapping any elements
	for (int i = 0; i < n; i++){
		int mn = arr[i], indx = i;
		for (int j = i + 1; j < n; j++){
			if (arr[j] < mn){
				mn = arr[j], indx = j;
			}
		}

		swap(arr[indx], arr[i]);
	}

	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}

	return 0;
}