#include <cstdlib>
#include <iostream>
#include <unordered_map>
#include <iterator>
using namespace std;

int main() {

	const int n = 10;
	int num[n] = { 1, 2, 3, 4, 1, 2, 3, 1, 2, 1 };

	int mx = 0;
	unordered_map<int, int> mp;

	for (int i = 0; i < n; i++) {
		mp[num[i]]++;
	}

	// 	Get max number of unique sets
	for (int i = 0; i < n; i++) {
		if (mx < mp[num[i]])
			mx = mp[num[i]];
	}

	// Generate all unique sets & Get max number of unique sets
	mx = 0;
	long long sum = 0;

	while (true) {
		sum = 0;
		for (unordered_map<int, int>::iterator itmp = mp.begin(); itmp != mp.end(); itmp++) {
			if (itmp->second > 0) {
				cout << itmp->first << " ";
				itmp->second = itmp->second - 1;
				sum++;
			}
		}
		cout << endl;

		if (sum)
			mx++;
		else
			break;
	}

	cout << mx << endl;

	return 0;
}