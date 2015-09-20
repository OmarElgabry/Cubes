#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int const n = 10;
	int goal = 10;
	int numbers[n] = { 1, 2, 4, 6, 10, 5, 13, 8, 14, 5 };

	sort(numbers, numbers + n);

	int i = 0, j = n - 1;
	while (i < j){
		if (numbers[i] + numbers[j] < goal)
			i++;
		else if (numbers[i] + numbers[j] > goal)
			j--;
		else {
			printf("%d + %d = %d\n", numbers[i], numbers[j], goal);
			i++; j--;
		}
	}

	return 0;
}