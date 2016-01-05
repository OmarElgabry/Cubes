#include <cstdlib>
#include <iostream>
using namespace std;

bool isPrime(long long n) {

	if (n == 2)
		return true;

	if (n < 2 || n % 2 == 0)
		return false;

	for (long long i = 3; i*i <= n; i += 2)
		if (n%i == 0)
			return false;

	return true;
}

bool solve(int last, int cunt){

	if (last < 0 || cunt > 3){
		return 0;
	}

	if (isPrime(last)){
		cout << cunt << endl;
		cout << last << " ";
		return 1;
	}

	for (int j = last - 1; j >= 1; --j) {
		if (isPrime(j)){
			if (solve(last - j, cunt + 1)){
				cout << j << " ";
				return 1;
			}
		}
	}

	return 0;
}

int main() {

	int n = 27;
	
	if (!solve(n, 1)){
		cout << "can't be solved" << endl;
	}

	return 0;
}