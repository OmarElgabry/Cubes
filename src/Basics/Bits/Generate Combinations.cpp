#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	const int n = 5; // max n can be between 20 - 25.
	int arr[n] = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < (1 << n); i++){
		for (int j = 0; j < n; j++){

			// shifting array j-indexes, and check if 1-bit or not.
			if ((i >> j) & 1){
				cout << arr[j] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}