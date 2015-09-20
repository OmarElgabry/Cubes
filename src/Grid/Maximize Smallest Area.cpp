#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	long long rows, cols, k;
	// rows = 4, cols = 6, k = 6;
	rows = 6, cols = 4, k = 2;

	if (rows > cols){
		swap(rows, cols);
	}

	if (k < rows){
		cout << max(rows*(cols / (k + 1)), cols*(rows / (k + 1))) << endl;
	}
	else if (rows <= k && k < cols){
		cout << rows*(cols / (k + 1)) << endl;
	}
	else if (cols <= k && k <= cols + rows - 2){
		cout << rows / (k + 2 - cols) << endl;
	}
	else{
		cout << -1 << endl;
	}

	return 0;
}