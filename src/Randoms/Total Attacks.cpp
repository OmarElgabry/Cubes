#include <cstdlib>
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

	const int n = 10;
	int numbers[n] = { 1, 2, 5, 1, 5, 7, 2, 6, 2, 6 };

	unordered_map<int, int> cunt;
	long long sum = 0;

	for (int i = 0; i < n; i++) {
		sum += cunt[numbers[i]]++;
	}

	cout << sum << endl;

	return 0;
}
