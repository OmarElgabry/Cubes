#include <cstdlib>
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

	const int n = 10, MAX = 100000;
	int arr[n] = { 7, 2, 4, 5, 16, 2, 0, 2, 4, 6 };

	unordered_set<int> s;
	bool unique[MAX];

	for (int i = 0; i < MAX; i++)
		unique[i] = 0;

	int total = 0;
	for (int i = 0; i < n; i++){
		s.insert(arr[i]);
		if (!unique[arr[i]])
			unique[arr[i]] = true, total++;
	}

	printf("Number of unqiue numbers using bool array: %d\n", total);
	printf("Number of unqiue numbers using set: %d\n", (int)s.size());

	for (unordered_set<int>::iterator it = s.begin(); it != s.end(); it++){
		printf("%d\n", *it);
	}

	for (int i = 0; i < MAX; i++){
		if (unique[i])
			printf("%d\n", i);
	}

	for (int i = 0; i < n; i++){
		if (unique[arr[i]])
			printf("%d\n", arr[i]), unique[arr[i]] = false;
	}

	return 0;
}
