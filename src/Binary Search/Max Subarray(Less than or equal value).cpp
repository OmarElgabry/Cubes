#include <cstdlib>
#include <iostream>
using namespace std;

const int n = 10;
int arr[n], t = 12, l = 0, r = 0;

bool valid(int mid, int t){

	long long sum = 0;

	for (int i = 0; i < mid; i++) sum += arr[i];
	if (sum <= t){
		l = 0, r = mid - 1;
		return true;
	}
	for (int i = mid; i < n; i++){
		sum = (sum + arr[i] - arr[i - mid]);
		if (sum <= t){
			l = i - mid + 1, r = i;
			return true;
		}
	}
	return false;
}

int main(){

	for (int i = 0; i < n; i++)
		arr[i] = i + 1;

	int s = 0, e = n;
	while (s < e){

		int mid = s + (e - s + 1) / 2;

		if (valid(mid, t))
			s = mid;
		else
			e = mid - 1;
	}

	printf("max size of subset <= %d = %d in range [%d -> %d]\n", t, s, l, r);

	return 0;
}