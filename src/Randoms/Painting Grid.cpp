#include <cstdlib>
#include <iostream>
using namespace std;

const int n = 5000, k = 3;
int rows[n], cols[n], rows_last_change[n], cols_last_change[n];

int main() {

	int r = 3, c = 3;
	int is_row, indx, color, change = 0;
	int operations[k][3] = { { 1, 1, 3 }, { 0, 2, 1 }, { 1, 2, 2 } };

	for (int i = 0; i < k; i++) {

		is_row = operations[i][0];
		indx = operations[i][1];
		color = operations[i][2];

		change++;
		if (is_row == 1) {
			rows[indx] = color;
			rows_last_change[indx] = change;
		}
		else {
			cols[indx] = color;
			cols_last_change[indx] = change;
		}
	}

	for (int i = 1; i <= r; i++) {
		for (int j = 1; j <= c; j++) {
			if (rows_last_change[i] > cols_last_change[j]) {
				cout << rows[i] << " ";
			}
			else {
				cout << cols[j] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}