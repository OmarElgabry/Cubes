#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

vector <long long> factorize(long long n){

	vector <long long> primes;

	for (long long i = 2; i * i <= n; ++i)
		while (n % i == 0)
			primes.push_back(i), n /= i;

	if (n > 1)
		primes.push_back(n);

	return primes;
}

int main(){

	long long n = 1000;
	vector<long long> primes = factorize(n);
	int sz = (int)primes.size();

	for (int i = 0; i < sz; i++){
		cout << primes[i] << endl;
	}

	return 0;
}