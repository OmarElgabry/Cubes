#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	const int n = 12, len = 3; // given 0 < 2 * len <= n
	int arr[n] = { 1, 2, 1, 15, 2, 3, 6, 8, 3, 3, 8, 6 };
	int window[n];

	for (int i = 0; i < n; i++)
		window[i] = 0;

	for (int i = 0; i < len; i++)
		window[0] += arr[i];
	for (int i = 1; i < n - len + 1; i++)
		window[i] = window[i - 1] - arr[i - 1] + arr[i + len - 1];

	long long total = 0;
	int indexL = 0, finalL = 0, finalR = 0;
	for (int l = 0, r = len; r < n - len + 1; l++, r++){

		if (window[indexL] < window[l]){
			indexL = l;
		}

		// every loop we compare total Vs max sub array we found so far at left + current sub array at right
		if (total < window[indexL] + window[r]){
			total = window[indexL] + window[r];
			finalL = indexL;
			finalR = r;
		}
	}

	printf("[%d -> %d], [%d -> %d]\n", finalL, finalL + len - 1, finalR, finalR + len - 1);

	return 0;

}