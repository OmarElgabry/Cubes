#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
#include<sstream>
using namespace std;

int main() {

	// prepare values for each word
	map<string, int> mp;
	mp["hello"] = 5;
	mp["hey"] = 3;
	mp["omar"] = 10;
	mp["are"] = 2;
	mp["you"] = 0;

	// start
	istringstream text("hello omar how are you today");
	string word;

	long long total = 0;

	while (text >> word){
		if (mp.count(word)){
			total += mp.at(word);
		}
	}

	cout << total << endl;

	return 0;
}