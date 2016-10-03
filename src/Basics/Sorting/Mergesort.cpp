#include <cstdlib>
#include <iostream>
using namespace std;

int const n = 9;
int arr[n] = { 1, 4, -1, 0, 2, 6, 1, 145, 7 };

void merge(int s, int mid, int e){

	int temp[100000];
	int k, i = s, j = mid + 1;

	for (k = 0; k <= e - s; k++){
		if (i > mid)
			temp[k] = arr[j++];
		else if (j > e)
			temp[k] = arr[i++];
		else if (arr[i] <= arr[j])
			temp[k] = arr[i++];
		else
			temp[k] = arr[j++];
	}

	for (int i = 0; i < k; i++)
		arr[s + i] = temp[i];

}

void divide(int s, int e){

	if (s >= e) return;

	int mid = s + (e - s) / 2;

	divide(s, mid);
	divide(mid + 1, e);
	merge(s, mid, e);

}

void mergesort(int s, int e){
	divide(s, e);
}


int main(){


	mergesort(0, n - 1);

	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
