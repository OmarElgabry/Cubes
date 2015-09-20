#include <cstdlib>
#include <iostream>
using namespace std;

int nxt[100005][10];

int main(){

	// Given number 11912346213, remove k = 4, so that the result is max.
	// Ex: after removing: 9346213.

	// Note: 
	// n is number of digits in 11912346213.
	// remainder = n - k = 11 - 4 = 7.

	string num = "11912346213";
	int n = (int)num.size(), k = 4, remainder = n - k;

	for (int i = 0; i < 10; i++){
		nxt[n][i] = -1;
	}

	for (int i = n - 1; i >= 0; i--){
		for (int j = 0; j <= 9; j++){
			nxt[i][j] = nxt[i + 1][j];
		}
		nxt[i][num[i] - '0'] = i;
	}

	for (int i = 0; i < n && remainder; i++){
		for (int j = 9; j >= 0; j--){
			if (nxt[i][j] == -1 || n - nxt[i][j] < remainder){
				continue;
			}
			else{
				printf("%d", j);
				remainder = remainder - 1;
				i = nxt[i][j];
				break;
			}
		}
	}

	printf("\n");

	return 0;
}