#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	const int n = 10;
	int arr[n + 1] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int cum[n + 1];
	bool mark[n + 1];

	for (int i = 0; i <= n; i++){
		cum[i] = mark[i] = 0;
	}

	for (int i = 0; i * i <= n; i++)
		mark[i * i] = 1;

	for (int i = 1; i <= n; i++)
		cum[i] = cum[i - 1] + mark[i];


	int start = 3, end = 9; // (1 -> n)

	cout << cum[end] - cum[start - 1] << endl;

	return 0;
}
