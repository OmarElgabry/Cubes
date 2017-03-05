#include <cstdlib>
#include <iostream>
using namespace std;

int const n = 50;
long long save[n + 1];

long long fibonacci_dp(int n){

	if (n <= 0) return 0;

	if (n <= 2) return 1;

	if (save[n])
		return save[n];

	return save[n] = fibonacci_dp(n - 2) + fibonacci_dp(n - 1);
}

/*

// CAUTION: This code will take too much time

long long fibonacci(int n){

	if (n <= 0) return 0;

	if (n <= 2) return 1;

	return fibonacci(n - 2) + fibonacci(n - 1);
}

*/

int main() {

	// using DP
	cout << fibonacci_dp(n) << endl;

	return 0;
}