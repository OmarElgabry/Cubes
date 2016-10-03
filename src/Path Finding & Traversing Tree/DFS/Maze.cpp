#include <cstdlib>
#include <iostream>
using namespace std;

const int n = 4;
int gr = -1, gc = -1;
char grid[n][n];
bool vis[n][n];

bool maze(int r, int c){

	if (r < 0 || r >= n || c < 0 || c >= n || grid[r][c] == 'X') // 'X' means block position
		return false;

	if (vis[r][c] == true) // already visited
		return false;

	vis[r][c] = true;

	if (grid[r][c] == 'G'){ // we found goal
		gr = r, gc = c;
		return true;
	}

	if (maze(r, c - 1)) return true;  	// search left
	if (maze(r, c + 1)) return true; 	// search right
	if (maze(r + 1, c)) return true;  	// search down
	if (maze(r - 1, c)) return true;  	// search up

	// vis[r][c] = 0;

	// If we didn't find the goal
	return false;
}

int main(){

	/*
		Test case:
		. . X .
		. X . G
		. . . X
		X . X X

	*/

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> grid[i][j]; // add any values

	bool found = maze(0, 0);
	if (found)
		printf("found goal at [%d, %d]\n", gr, gc);
	else
		printf("goal not found\n");

	return 0;

}