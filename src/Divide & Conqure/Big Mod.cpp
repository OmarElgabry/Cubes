#include <cstdlib>
#include <iostream>
using namespace std;

long long big_mod(int b, int p, int mod){

	if (p == 0) return 1;

	long long s = big_mod(b, p / 2, mod);

	s = s % mod;
	s = (s*s) % mod;

	if (p % 2){
		s = (s * b) % mod;
	}

	return s;
}

int main(){


	printf("%lld\n", big_mod(2147483647, 2147483647, 46340));

	return 0;
}