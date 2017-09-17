#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

	int const n = 10, block = 7, l = 3;
	
	// an element added to the end of the array and assigned to a value >= block so that the last subarray (if exist) in the array will be considered in the loop.
	// otherwise, a condition if(subarrays > 0) must be added after the loop.
	int arr[n + 1] = { 2, 2, 0, 7, 3, 2, 9, 2, 3, 1, 0 };
	arr[n] = block;

	int sum = 0, st = 0, cunt = 0;	
	for (int i = 0; i <= n; i++){
		if (arr[i] >= block) {
			int subarrays = sum - l + 1;
			if (subarrays > 0) {
				printf("%d sub array(s) found from index %d to index %d\n", subarrays, st, i - 1);
				cunt++;
			}
			sum = 0, st = i + 1;
		}
		else sum++;
	}
	
	printf("The total number of ways to print subarrays: %d", cunt);

	return 0;
}