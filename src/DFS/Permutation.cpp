#include <cstdlib>
#include <iostream>
using namespace std;

const int n = 3;
int num[n] = { 4, 5, 6 }, cur[n];
bool vis[n];

void permutation(int i) {

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

			permutation(i + 1);

			vis[j] = 0;
		}
	}
}

int main(){

	permutation(0);

	return 0;

}