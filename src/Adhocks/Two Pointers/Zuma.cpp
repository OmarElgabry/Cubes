#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

	const int n = 12;
	int tnum = 2, tindex = 4;
	int arr[n] = { 5, 4, 4, 2, 2, 4, 4, 5, 5, 1, 7, 6 };

	int total_score = 0, score = 1, l = tindex - 1, r = tindex;

	while (true){

		if ((l >= 0 && arr[l] != tnum || l < 0) && (r < n && arr[r] != tnum || r >= n)){
			if (score < 3) break;

			total_score += score, score = 0;
			if (l >= 0 && r < n && arr[l] == arr[r])
				tnum = arr[l];
			else break;
		}

		if (l >= 0 && arr[l] == tnum){
			score++, l--;
		}
		if (r < n && arr[r] == tnum){
			score++, r++;
		}
	}

	cout << total_score << endl;

	return 0;
}