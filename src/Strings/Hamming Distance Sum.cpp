#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {

	string y, x;
	y = "10";
	x = "001111";

	int l = (int)x.size();
	int c = (int)y.size();
	int ones = 0, zeros = 0;
	long long sum = 0;

	for (int i = 0, j = 0; i < l; i++){

		if (i < c){
			if (y[i] == '0') zeros++;
			else ones++;
		}

		if (l - i < c){
			if (y[j] == '0') zeros--;
			else ones--;
			j++;
		}

		if (x[i] == '0') sum += ones;
		else sum += zeros;
	}


	cout << sum << endl;

	return 0;
}