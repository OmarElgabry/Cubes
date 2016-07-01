#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

	// METHOD 1

	const int n = 4;
	int k = 5;
	int array[n] = { 10, 4, 18, 3 };

	int cur_numbers = 1;
	while (cur_numbers < k) {
		k -= cur_numbers;
		cur_numbers++;
	}

	cout << array[k - 1] << endl;

	// METHOD 2

	int size = 0;
	k = 5, cur_numbers = 1;
	while (true) {
		if (size + cur_numbers >= k) {
			cout << array[k - size - 1] << endl;
			break;
		}
		size += cur_numbers, cur_numbers++;
	}

	return 0;
}