#include <cstdlib>
#include <iostream>
using namespace std;

const int n = 4;
// int cunt = 0;
char grid[n][n];
bool vis[n][n];

/*void*/ bool countConnectedCells(int r, int c) {

	if (r < 0 || r >= n || c < 0 || c >= n || grid[r][c] == 'X' || vis[r][c] == 1) // 'X' means block position
		return false;	


	vis[r][c] = 1;	
	// cunt++;

	// try the 4 neighbor cells
	countConnectedCells(r, c - 1);  // go left
	countConnectedCells(r, c + 1);  // go right
	countConnectedCells(r - 1, c);  // go up
	countConnectedCells(r + 1, c);  // go down
	
	return true;
}


int main(){

	/*
		Test case:
		. . X .
		X X X X
		. . . X
		X . X X

	*/

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> grid[i][j]; // add any values

	int blocks = 0;

	for (int i = 0; i < n; ++i)	{
		for (int j = 0; j < n; ++j){

			// cunt = 0;
			blocks += countConnectedCells(i, j);

			// if (cunt > 0)
			//	blocks++;
		}
	}

	printf("number of connected blocks: %d\n", blocks);

	return 0;

}
