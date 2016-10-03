#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
#include <iterator>
using namespace std;


int main(){

	const int n = 10;
	int arr[n] = { 6, 78, 63, 59, 28, 24, 8, 96, 99, 120 };

	int l = -1, r = -1;
	bool can = true, found = false;
	for (int i = 0; i + 1 < n; i++){

		if (found && arr[i] > arr[i + 1]){
			can = false;
			break;
		}

		if (arr[i] > arr[i + 1]){
			if (l == -1)
				l = i;
			r = i + 1;
		}
		else if (arr[i] < arr[i + 1] && l != -1){
			found = true;
		}
	}

	if (!can){
		cout << false << endl;
	}
	else if (l == -1 && r == -1){
		cout << "already sorted" << endl;
	}
	else if (((l > 0 && arr[l - 1] < arr[r]) || l == 0) && ((r < n - 1 && arr[r + 1] > arr[l]) || r == n - 1)){
		cout << "[" << l << " -> " << r << "]" << endl;
	}
	else{
		cout << false << endl;
	}

	return 0;
}
