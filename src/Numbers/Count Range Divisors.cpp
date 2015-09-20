#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int countDivisors1(int n){

	vector<int> cuntDivisors(n + 1);

	for (int i = 1; i <= n; i++)			// for each divisor
		for (int k = i; k <= n; k += i)		// for multiplies of this divisor.
			cuntDivisors[k]++;

	int s = 0;
	for (int i = 1; i <= n; i++)
		s += cuntDivisors[i];

	return s;
}

int countDivisors2(int n){

	int s = 0;

	for (int i = 1; i <= n; i++){
		s += n / i;
	}

	return s;
}

int main(){

	int n = 100;

	cout << countDivisors1(n) << endl;
	cout << countDivisors2(n) << endl;

	return 0;
}