#include <cstdlib>
#include <iostream>
using namespace std;

char grid[3][3];
int n, k;

char getColor(int r, int c, int cunt){

	if (grid[r % n][c % n] == '*')
		return '*';
	else if (cunt == 1)
		return '.';

	return getColor(r / n, c / n, cunt - 1);
}

int main() {

	/*
		Test case:
		2 3
		.*
		..
	*/

	cin >> n >> k;
	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
			cin >> grid[i][j];

	int r = (int)pow(n, k);
	int c = (int)pow(n, k);

	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			if (k == 1)
				printf("%c", grid[i][j]);
			else if (grid[i / (int)(pow(n, k - 1))][j / (int)(pow(n, k - 1))] == '*')
				printf("*");
			else
				printf("%c", getColor(i, j, k - 1));
		}
		printf("\n");
	}

	return 0;
}