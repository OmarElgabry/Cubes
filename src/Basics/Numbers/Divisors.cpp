#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

vector<long long> getDivisors(long long n){

	vector<long long> v;
	long long i;

	for (i = 1; i*i < n; i++)
		if (n%i == 0)
			v.push_back(i), v.push_back(n / i);

	if (i*i == n)
		v.push_back(i);

	return v;
}

int main(){

	long long n = 1000;
	vector<long long> divisors = getDivisors(n);
	int sz = (int)divisors.size();

	for (int i = 0; i < sz; i++){
		cout << divisors[i] << endl;
	}

	return 0;
}