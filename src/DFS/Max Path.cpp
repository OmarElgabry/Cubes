#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

const int n = 3;
int grid[n][n];

int maxPath(int r, int c) {

	if (r < 0 || r >= n || c < 0 || c >= n)
		return 0;

	int right = maxPath(r, c + 1);	// right
	int down = maxPath(r + 1, c);	// down

	// grid has the numbers in the plain above
	return grid[r][c] + max(right, down);
}

int main(){

	/*
		Test case:
		5 4 1
		6 7 3
		3 8 9

	*/
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> grid[i][j]; // add any values

	printf("%d\n", maxPath(0, 0));

	return 0;

}