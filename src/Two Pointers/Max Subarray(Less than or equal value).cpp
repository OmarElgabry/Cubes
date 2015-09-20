#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	const int n = 7, t = 13;
	int arr[n] = { 6, 8, 14, 9, 4, 11, 10 };

	int sum = 0, mx = 0, l = 0, r = 0, st = 0, end = 0;

	while (end < n){
		if (arr[end] + sum <= t){
			if (mx < end - st + 1){
				mx = end - st + 1;
				l = st, r = end;
			}
			sum += arr[end++];
		}
		else{
			if (end == st){
				end++, st++;
				sum = 0;
			}
			else{
				sum -= arr[st++];
			}
		}
	}

	printf("[%d -> %d]\n", l, r);

	return 0;

}