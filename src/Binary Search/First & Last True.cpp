#include <cstdlib>
#include <iostream>
using namespace std;

bool valid(int mid, bool *arr, bool goal){
	return arr[mid] == goal;
}

int main(){

	const int n = 7;
	bool arr1[n] = { true, true, true, true, true, true, false };
	int s = 0, e = n - 1;
	bool goal = true;

	while (s < e){

		// Overflow: int mid = (e + s) / 2
		// What if e = s = 2147483648. 
		int mid = s + ((e - s + 1) / 2);

		if (valid(mid, arr1, goal)) {
			s = mid;
		}
		else
			e = mid - 1;
	}

	printf("the last true at index: %d\n", s);


	bool arr2[n] = { false, false, false, false, true, true, true };
	s = 0, e = n - 1, goal = true;

	while (s < e){

		int mid = s + ((e - s) / 2);

		if (valid(mid, arr2, goal)) {
			e = mid;
		}
		else
			s = mid + 1;
	}

	printf("the first true at index: %d\n", s);


	return 0;
}
