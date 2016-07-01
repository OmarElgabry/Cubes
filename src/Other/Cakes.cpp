#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	const int n = 4;
	int k = 3;
	int needed[n] = { 4, 3, 5, 6 };
	int available[n] = { 11, 12, 14, 20 };

	int min_cakes = 100000;
	for (int i = 0; i < n; i++){
		min_cakes = min(min_cakes, available[i] / needed[i]);
	}

	int remaining = 0;
	while (k > 0){
		for (int i = 0; i < n; i++){
			if (min_cakes == available[i] / needed[i]){
				remaining = needed[i] - (available[i] % needed[i]);
				if (remaining <= k){
					k = k - remaining;
					available[i] += remaining;
				}
				else{
					cout << min_cakes << endl;
					return 0;
				}
			}
		}
		min_cakes += 1;
	}

	cout << min_cakes << endl;

	return 0;
}