#include <cstdlib>
#include <iostream>
using namespace std;

const int n = 3, max_len = 2; // max_len <= n
int arr[n] = { 1, 7, 2 }, cur[n];

void combination(int i, int len){

	if (len == max_len){
		for (int j = 0; j < max_len; ++j)
			cout << cur[j];
		cout << "\n";
		return;
	}

	for (int index = i; index < n; index++){
		cur[len] = arr[index];
		combination(index + 1, len + 1);
	}

	return;
}

int main(){

	combination(0, 0);

	return 0;
}