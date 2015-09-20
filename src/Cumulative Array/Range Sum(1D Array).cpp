#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	const int n = 5;
	int arr[n + 1] = { 0, 3, 4, 1, 2, 5 };
	int cum[n + 1];

	for (int i = 0; i <= n; i++){
		cum[i] = 0;
	}

	for (int i = 1; i <= n; i++)
		cum[i] = cum[i - 1] + arr[i];


	int start = 2, end = 5; // (1 -> n)

	cout << cum[end] - cum[start - 1] << endl;

	return 0;
}
