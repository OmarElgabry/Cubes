#include <cstdlib>
#include <iostream>
using namespace std;

// The fibonanci() function is better solved with DP
int fibonacci(int n){

	if (n <= 0) return 0;

	if (n <= 2) return 1;

	return fibonacci(n - 2) + fibonacci(n - 1);
}

void fibonacci_series(int n){

	int cur = 0, temp = 0, next = 1;

	while (n--){
		cout << cur << endl;
		temp = cur, cur = next;
		next = temp + next;
	}

	// printf("The fibonanci value for n: %d", cur);
}

int main(){

	int n = 7;

	printf("The fibonanci value for %d: %d\n", n, fibonacci(n));

	printf("The fibonanci series for first %d numbers: \n", n);
	fibonacci_series(n);

	return 0;
}