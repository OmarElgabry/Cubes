#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

vector<bool> getPrimeNumbers(int n) {

	vector<bool> isPrime(n + 1, true);
	isPrime[0] = isPrime[1] = 0;

	for (long long i = 2; i*i <= n; ++i) {
		if (isPrime[i]) {
			for (int j = i * i; j <= n; j += i)
				isPrime[j] = 0;
		}
	}

	return isPrime;
}

int main(){

	int n = 10;
	vector<bool> isPrime = getPrimeNumbers(n);
	vector<int> moves(n + 1, 0);

	for (int i = 0; i <= n; ++i)
		if (isPrime[i])
			cout << i << endl;

	// count the minimum number of moves(add 1) needed to get a prime number
	int cunt = 0;
	for (int i = n; i >= 0; i--){
		if (isPrime[i])
			cunt = 0;
		else{
			cunt++;
			moves[i] = cunt;
		}
	}

	// min number to be added to 8 so that result is prime number is 3(i.e. 3 + 8 = 11)
	cout << moves[8] << endl;

	return 0;
}