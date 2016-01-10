#include <cstdlib>
#include <iostream>
using namespace std;

int const n = 50;
long long save[n + 1];

long long fibonanci_dp(int n){

	if (n <= 0) return 0;

	if (n <= 2) return 1;

	if (save[n])
		return save[n];

	return save[n] = fibonanci_dp(n - 2) + fibonanci_dp(n - 1);
}

/*

// CAUTION: This code will take too much time

long long fibonanci(int n){

	if (n <= 0) return 0;

	if (n <= 2) return 1;

	return fibonanci(n - 2) + fibonanci(n - 1);
}

*/

long long fibonanci_loop(int n){

	long long a = 0, t = 0, b = 1;

	while (n--){
		// cout << a << endl;
		t = a, a = b;
		b = t + b;
	}

	// cout << a << endl;
	return a;
}

int main() {

	// using DP
	cout << fibonanci_dp(n) << endl;

	// using loop
	cout << fibonanci_loop(n) << endl;


	return 0;
}
