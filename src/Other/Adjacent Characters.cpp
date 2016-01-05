#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

char grid[505][505];
int accrw[505][505];

int main() {

	/*
	Test case:
	5  8
	....#..#
	.#......
	##.#....
	##..#.##
	........
	*/

	int h, w;
	cin >> h >> w;

	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++){
			cin >> grid[i][j];
		}
	}

	for (int i = 0; i < h; i++){
		int accn = 0;
		bool f = false;
		for (int j = 0; j < w; j++){
			if (grid[i][j] == '#'){
				if (accn == 0) accn++;
				accrw[i][j] = accn;
				f = true;
			}
			else if (f){
				accrw[i][j] = accn;
				f = false;
			}
			else{
				accn++;
				accrw[i][j] = accn;
			}
		}
	}

	vector<pair<int, int>> queries;
	int c1, c2;							// where 0 <= c1, c2 < w, and c2 >= c1.

	queries.push_back(make_pair(1, 3));
	queries.push_back(make_pair(2, 5));

	for (int j = 0; j < (int)queries.size(); j++){

		int sum = 0;

		c1 = queries[j].first;
		c2 = queries[j].second;

		for (int i = 0; i < h; i++){
			sum += (accrw[i][c2] - accrw[i][c1]);
		}

		cout << sum << endl;
	}


	return 0;
}