#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

	const int n = 10;
	int arr[n] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int c = 5;

	for (int i = 0; i < n - c + 1; i++){
		for (int j = i; j < c + i; j++){
			printf("%d ", arr[j]);
		}
		printf("\n");
	}

	return 0;
}