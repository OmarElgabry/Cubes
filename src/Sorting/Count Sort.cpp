#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
#include <iterator>
using namespace std;

int main(){

	const int n = 10;
	// int arr[n] = { 3, -1, 0, 1, 4, 8, 1, 4, 34, -2 };
	int arr[n] = { 3, 1, 0, 1, 4, 8, 11, 4, 34, 2 };

	// 1st method
	// using map allow big integers & negative numbers
	map<int, int>mp;

	for (int i = 0; i < n; i++){
		mp[arr[i]]++;
	}

	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++){
		for (int j = 0; j < it->second; j++){
			cout << it->first << " ";
		}
	}
	cout << endl;

	// 2nd method
	const int MAX = 100000;
	int cunt[MAX];
	for (int i = 0; i < MAX; i++)
		cunt[i] = 0;

	for (int i = 0; i < n; i++)
		cunt[arr[i]]++;

	for (int i = 0; i < MAX; i++)
		for (int j = 0; j < cunt[i]; j++)
			cout << i << " ";
	cout << endl;

	return 0;
}
