#include <cstdlib>
#include <iostream>
#include <string>
#include <unordered_map>
#include <iterator>
using namespace std;

int main() {

	const int n = 6;
	string text1[n] = { "foo", "bar", "baz", "foo", "foo", "yard" };
	string text2[n] = { "bar", "bar", "baz", "yard", "foo", "yard" };

	unordered_map<string, int>mp;

	for (int i = 0; i < n; i++){
		mp[text1[i]]++;
		mp[text2[i]]--;
	}

	long long sum = 0;
	for (unordered_map<string, int>::iterator it = mp.begin(); it != mp.end(); it++){
		sum += abs(it->second);
	}

	cout << sum << endl;


	return 0;
}