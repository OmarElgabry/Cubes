#include <cstdlib>
#include <iostream>
using namespace std;

int const n = 50;
long long save[n + 1];

long long fibonanci(int n){

	if (n <= 1)
		return 1;

	if (save[n])
		return save[n];

	return save[n] = fibonanci(n - 2) + fibonanci(n - 1);
}

/*

// CAUTION: This code will take too much time

int fibonanci(int n){

	if (n <= 1)
		return 1;

	return fibonanci(n - 2) + fibonanci(n - 1);
}

*/


int main(){

	printf("fibonanci of %d = %lld\n", n, fibonanci(n));

	return 0;
}