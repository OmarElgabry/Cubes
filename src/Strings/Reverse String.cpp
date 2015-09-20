#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int cum[100005];

int main(){

	string str = "hello";
	int size = (int)str.size();

	const int n = 3;
	int queries[n] = { 0, 3, 2 };

	for (int i = 0; i < n; i++){
		if (queries[i] >= size / 2){
			queries[i] = size - queries[i] - 1;
		}
		cum[queries[i]]++;
		cum[size - queries[i]]--;
	}

	for (int i = 1; i <= size; i++){
		cum[i] += cum[i - 1];
	}

	for (int i = 0; i < size / 2; i++){
		if (cum[i] % 2){
			swap(str[i], str[size - i - 1]);
		}
	}

	cout << str << endl;

	return 0;
}