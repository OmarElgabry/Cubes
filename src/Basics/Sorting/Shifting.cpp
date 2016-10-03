#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	const int n = 5;
	int arr[n] = { 4, 5, 6, 2, 3 };

	int cnt = 0, indx;
	for (int i = 1; i < n; i++) {
		if (arr[i] < arr[i - 1])
			cnt++, indx = i;
	}

	if (cnt == 0)
		cout << "already sorted" << endl;
	else if (cnt > 1 || arr[0] < arr[n - 1])
		cout << false << endl;
	else
		cout << (n - indx) << endl;

	return 0;
}
