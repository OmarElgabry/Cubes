#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

	int n = 5, cuntsl, cuntsr, cuntd;

	for (int i = 0; i < n; i++){
		cuntsl = cuntsr = abs(n / 2 - i);
		cuntd = n - (cuntsl * 2);
		while (cuntsl--) cout << "#";
		while (cuntd--) cout << "D";
		while (cuntsr--) cout << "#";
		cout << endl;
	}

	return 0;
}