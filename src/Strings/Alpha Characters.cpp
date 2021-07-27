#include <cstdlib>
#include <iostream>
#include <unordered_set>
#include <iterator>
#include <string>
using namespace std;

int main() {

	// string str = "@#$#%#@% ";
	// string str = "text";
	string str = ".omar.is.brilliant.";
	unordered_set<string> s;

	// METHOD 1: Loop through str, examine it char by char
	int size = (int)str.size();
	string ans = "";

	for (int i = 0; i <= size; i++){
		if (isalpha(str[i])){
			ans += str[i];
		}
		else if (ans != ""){
			s.insert(ans);
			ans = "";
		}
	}

	unordered_set<string>::iterator it;
	for (it = s.begin(); it != s.end(); it++){
		cout << *it << endl;
	}
	
	// METHOD 2: Use strings.split(str, ".") = strs
	// For each s in strs:
	//	if s is not empty and contains only alpha, then insert it into the set
	//	otherwise ignore it.

	return 0;
}
