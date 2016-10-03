#include <cstdlib>
#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main(){

	// 1. Match

	// Only alpha numeric, spaces, hyphen, and underscore
	regex names("[[:alnum:] _-]+");
	// regex names("[a-zA-Z0-9 _-]+");
	cout << regex_match("hello world", names) << endl;
	cout << regex_match("hello world!", names) << endl;

	// Email
	regex email("^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,4}$");
	cout << regex_match("example@domain.com", email) << endl;
	cout << regex_match("in%valid#email@domain.com", email) << endl;

	// must contain but can't start with astrex.
	regex astrex("^(?!\\*)(\\w+)(\\*+)(\\w*)$");
	cout << regex_match("*a*bc", astrex) << endl;
	cout << regex_match("a*bc", astrex) << endl;

	// Phone number
	// valid patterns: XXX-XXX-XXX, XXX/XXX/XXXX, or XXX.XXX.XXXX
	regex phone("^(\\d{3}|\\(\\d{3}\\))([-/\\.])(\\d{3})(\\2)(\\d{4})$");
	cout << regex_match("123/456/7890", phone) << endl;
	cout << regex_match("(123).456.7890", phone) << endl;

	// 2. Search
	string s = "this subject has a submarine as a subsequence";

	// search for all words
	regex word("\\b\\w+\\b");

	// search for a word that starts with a string
	// regex word("\\bsub([^ ]*)");

	// search for a word with substring
	// regex word("([^ ]*)(marine)([^ ]*)");

	// search for a word
	// regex word("\\b(submarine)\\b");

	smatch m;
	while (regex_search(s, m, word)) {
		cout << m.str() << endl;
		s = m.suffix().str();
	}

	// 3. Replace
	// replace all white spaces
	cout << regex_replace(" hello world ", regex("\\s"), "") << endl;

	// replace all characters that aren't alphanumeric or underscore
	cout << regex_replace("* hel%lo_w^or!ld ", regex("\\W"), "") << endl;

	return 0;
}
