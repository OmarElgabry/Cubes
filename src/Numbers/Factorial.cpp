#include <cstdlib>
#include <iostream>
using namespace std;

long long getFactorial(long long n){

	if (n <= 1)
		return 1;

	return n * getFactorial(n - 1);
}

int main(){

	cout << getFactorial(20) << endl;

	return 0;
}