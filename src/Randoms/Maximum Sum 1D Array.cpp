#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

const int n = 10;
int tl = 0, l = 0, r = 0;
int arr[n] = { 1, 10, -3, 2, -40, -4, 5, 3, 18, -2 };

int kadane(){

	int sum = 0, mx = arr[0];
	tl = l = r = 0;

	for (int i = 0; i < n; i++){
		if (sum < 0)
			sum = arr[i], tl = i;
		else
			sum += arr[i];

		if (sum > mx){
			mx = sum, l = tl, r = i;
		}
	}

	return mx;
}

int main(){

	int mx = (n == 0 ? 0 : kadane());

	printf("%d\n", mx);
	printf("[%d -> %d]\n", l, r);

	return 0;
}
