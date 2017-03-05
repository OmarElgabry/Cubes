#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

	int const n = 10, block = 7, l = 3;
	int arr[n + 1] = { 2, 2, 0, 7, 3, 2, 9, 2, 3, 1, 0 };		// an element added to the end of the array and assigned to a value >= bad so that the last elements (if exist) in the array will be considered in the loop.
	// otherwise, a condition if(sum - l + 1 > 0) must be added after the loop.
	int sum = 0, st = 0;
	arr[n] = block;
	for (int i = 0; i <= n; i++){
		if (arr[i] >= block) {
			int subarrays = sum - l + 1;
			if (subarrays > 0)	
				printf("%d sub array(s) found from index %d to index %d\n", sum, st, i - 1);
			sum = 0, st = i + 1;
		}
		else sum++;
	}

	return 0;
}
