#include <cstdlib>
#include <iostream>
using namespace std;

long long factorial(long long n){

	if (n <= 1)
		return 1;

	return n * factorial(n - 1);
}

int main(){

	long long n = 5;
	cout << factorial(n) << endl;

	return 0;
}