#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int const n = 10;
	int goal = 10;
	int numbers[n] = { 1, 2, 4, 6, 10, 5, 13, 8, 14, 5 };

	sort(numbers, numbers + n);

	for (int i = 0; i < n - 2; i++){

		int j = i + 1, k = n - 1;

		while (j < k){
			if (numbers[i] + numbers[j] + numbers[k] < goal)
				j++;
			else if (numbers[i] + numbers[j] + numbers[k] > goal)
				k--;
			else {
				printf("%d + %d + %d = %d\n", numbers[i], numbers[j], numbers[k], goal);
				j++; k--;
			}
		}
	}

	return 0;
}