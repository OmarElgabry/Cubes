#include <cstdlib>
#include <iostream>
#include <string>
#include <unordered_map>
#include <iterator>
#include <sstream>
using namespace std;

int main() {

	istringstream text("foo bar baz foo foo yard");
	string word;

	unordered_map<string, int> mp;

	while (text >> word){
		mp[word]++;
	}

	for (unordered_map<string, int>::iterator it = mp.begin(); it != mp.end(); it++){
		cout << it->first << " " << it->second << endl;
	}

	return 0;
}