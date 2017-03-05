#include <cstdlib>
#include <iostream>
using namespace std;

int F3n_1(int n){

	if (n == 1)
		return 1;

	if (n % 2 == 0)
		return 1 + F3n_1(n / 2);

	return 1 + F3n_1(3 * n + 1);
}

int main(){

	int n = 7;
	printf("3n+1: %d\n", F3n_1(n));

	return 0;
}