#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

	const int n = 10, l = 4;
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int operations[l] = { +1, -1, 0, 0 };

	for (int i = 0; i < n; i++){
		arr[i] = arr[i] + operations[i % l];
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}