#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

const int n = 3;
int num[n] = { 4, 5, 6 }, cur[n];
bool vis[n];

void permutation_dfs(int i) {

	if (i == n){
		for (int j = 0; j < n; ++j)
			cout << cur[j];
		cout << "\n";
		return;
	}

	for (int j = 0; j < n; ++j){
		if (!vis[j]){
			vis[j] = 1;
			cur[i] = num[j];

			permutation_dfs(i + 1);

			vis[j] = 0;
		}
	}
}

void permutation() {

	sort(num, num + n);
	do{
		for (int j = 0; j < n; ++j)
			cout << num[j];
		cout << "\n";
	} while (next_permutation(num, num + n));

}

int main() {

	// using recursion
	permutation_dfs(0);

	// using next_permutation()
	permutation();

	return 0;
}
