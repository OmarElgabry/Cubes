#include <cstdlib>
#include <iostream>
using namespace std;

const int n = 2, k = 2;
char grid[n][n];

char getColor(int r, int c, int cunt){

	if (grid[r % n][c % n] == 'b')
		return 'b';
	else if (cunt == 1)
		return 'w';

	return getColor(r / n, c / n, cunt - 1);
}

int main() {

	/*
		Test case:
		w b
		w w
	*/

	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
			cin >> grid[i][j];

	int r = (int)pow(n, k);
	int c = (int)pow(n, k);

	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			if (k == 1)
				printf("%c", grid[i][j]);
			else if (grid[i / (int)(pow(n, k - 1))][j / (int)(pow(n, k - 1))] == 'b')
				printf("b");
			else
				printf("%c", getColor(i, j, k - 1));
		}
		printf("\n");
	}

	return 0;
}