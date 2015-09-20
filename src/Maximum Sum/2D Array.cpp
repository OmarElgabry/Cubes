#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

const int n = 4;
int tl = 0, l = 0, r = 0;
int arr[n][n];
int temp[n];

int kadane(){

	int sum = 0, mx = (int)-1e9;
	tl = l = r = 0;

	for (int i = 0; i < n; i++){
		if (sum < 0)
			sum = temp[i], tl = i;
		else
			sum += temp[i];

		if (sum > mx){
			mx = sum, l = tl, r = i;
		}
	}

	return mx;
}

int main(){

	/*
		Test case:
		1   2   3  -4
		-5  -1  2  4
		1   1   2  1
		3   -2  1  1
	*/

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j]; // add any values

	int mx = (n == 0 ? 0 : (int)-1e9), x1 = 0, x2 = 0, y1 = 0, y2 = 0;
	for (int i = 0; i < n; i++){

		for (int c = 0; c < n; c++)
			temp[c] = 0;

		for (int j = i; j < n; j++){
			for (int k = 0; k < n; k++){
				temp[k] += arr[j][k];
			}

			int maxSum = kadane();
			if (maxSum > mx){
				mx = maxSum;
				x1 = i, x2 = j;
				y1 = l, y2 = r;
			}
		}
	}

	printf("%d\n", mx);
	printf("(%d, %d) -> (%d, %d)\n", x1, y1, x2, y2);

	return 0;
}