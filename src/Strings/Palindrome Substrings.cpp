#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str, int k){

	int n1 = 0;
	int n2 = (int)str.size() - k;

	while (n1 + k - 1 < n2){
		string s1 = str.substr(n1, k);
		string s2 = str.substr(n2, k);
		if (s1 != s2){
			return false;
		}
		n1 += k;
		n2 -= k;
	}

	return true;
}

int main() {

	string str = "abckfgabc"; // abc kfg abc
	cout << isPalindrome(str, 3) << endl;

	return 0;
}