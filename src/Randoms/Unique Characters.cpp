#include <cstdlib>
#include <iostream>
#include <string>
#include <unordered_set>
#include <iterator>
using namespace std;

bool cunt[26];

int main() {

	string str = "lMshrNockKmgDqzXp";
	unordered_set<char> s;
	int total = 0;

	for (int i = 0; str[i]; i++){
		if (isalpha(str[i])){

			// using set
			s.insert(str[i]);
			
			// using bool array
			if (!cunt[tolower(str[i]) - 'a'])
				cunt[tolower(str[i]) - 'a'] = 1, total++;
		}
	}

	// uppercase & lowercase using set
	cout << "number of unique uppercase & lowercase characters " << (int)s.size() << endl;
	for (unordered_set<char>::iterator it = s.begin(); it != s.end(); it++){
		cout << *it << endl;
	}

	// lowercase or uppercase using bool array
	cout << "number of unique lowercase characters " << total << endl;
	for (int i = 0; i < 26; i++){
		if (cunt[i])
			cout << char('a' + i) << endl;
	}

	return 0;
}