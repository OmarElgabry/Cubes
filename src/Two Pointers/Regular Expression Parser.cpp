#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

bool match(string &sourceStr, string &patternStr, int sourceIndex, int patternIndex) {

	if (patternStr == "*") {
		return true;
	}
	else if (sourceIndex < 0 && patternIndex < 0) {
		return true;
	}
	else if (sourceIndex < 0) {

		// Check if the remaining parts of the pattern are optional
		while (patternIndex >= 0) {
			if (patternStr[patternIndex] == '*') {
				patternIndex = patternIndex - 2;
			}
			else {
				return false;
			}
		}

		return true;
	}

	// If you find the pattern string already consumed (patternIndex < 0) 
	// and there are already existing characters in the source string(see previous condition) then retrun false.
	else if (patternIndex < 0){
		return false;
	}

	if (sourceStr[sourceIndex] == patternStr[patternIndex]) {
		return match(sourceStr, patternStr, --sourceIndex, --patternIndex);
	}
	else if (patternStr[patternIndex] == '*') {
		if (sourceStr[sourceIndex] == patternStr[patternIndex - 1]) {

			if (patternIndex > 1 && patternStr[patternIndex - 1] == patternStr[patternIndex - 2]) {
				patternStr = patternStr.substr(0, patternIndex - 1) + "*";
				patternIndex--;
			}

			return match(sourceStr, patternStr, --sourceIndex, patternIndex);
		}
		else {

			patternIndex -= 2;
			return match(sourceStr, patternStr, sourceIndex, patternIndex);
		}
	}
	else {
		return false;
	}
}

bool match(string sourceStr, string patternStr) {

	// we don't allow single wildcard as a pattern, or pattern that starts with wildcard.
	if ((int)patternStr.size() >= 1 && (patternStr[0] == '+' || patternStr[0] == '*')){
		return false;
	}

	for (int i = 1; i < (int)patternStr.size(); i++){

		// we don't allow consecutive wildcards: ++, **, +*
		if ((patternStr[i] == '+' && (patternStr[i - 1] == '+' || patternStr[i - 1] == '*')) ||
			(patternStr[i] == '*' && (patternStr[i - 1] == '+' || patternStr[i - 1] == '*'))){
			return false;
		}

		// convert any x+ with xx*
		if (patternStr[i] == '+'){
			patternStr = patternStr.replace(i, 1, patternStr.substr(i - 1, 1) + "*");
			i++;
		}
	}

	return match(sourceStr, patternStr, (int)sourceStr.size() - 1, (int)patternStr.size() - 1);
}

int main() {

	cout << (match("aa", "a")); // false
	cout << (match("aa", "aa")); // true
	cout << (match("aa", "a*")); // true
	cout << (match("aa", "*")); // false
	cout << (match("a", "b*a")); // true
	cout << (match("a", "a*a")); // true
	cout << (match("a", "b*a*a")); // true 
	cout << (match("aab", "c*a*b")); // true
	cout << (match("ccccccaaab", "c*a*b")); // true
	cout << (match("ccccccb", "c*a*b")); // true
	cout << (match("ccccccb", "c*a*b")); // true
	cout << (match("bz", "c*a*bz")); // true
	cout << (match("ccccb", "w*c*a*b")); // true
	cout << (match("wz", "w*c*a*b")); // false

	cout << endl;
	cout << (match("aa", "aa*")); // true
	cout << (match("aa", "aaaa*")); // false
	cout << endl;

	cout << (match("ab", "+")); // false
	cout << (match("a", "ab+")); // false
	cout << (match("a", "a+")); // true
	cout << (match("ac", "a+b*c+")); // true
	cout << (match("aaaa", "a+b*")); // true
	cout << (match("av", "ab+v+")); // false
	cout << (match("ab", "ab+")); // true
	cout << (match("aaaabb", "a+b+")); // true
	cout << (match("bbb", "a+b+")); // false
	cout << (match("a", "+a")); // false
	cout << (match("a", "+a+b*")); // false
	cout << (match("a", "a*+")); // false
	cout << endl;

	return 0;
}