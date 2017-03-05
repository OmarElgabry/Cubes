#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str){

	int n1 = 0;
	int n2 = (int)str.size() - 1;

	while (n1 < n2){
		if (str[n1] != str[n2]){
			return false;
		}
		n1++, n2--;
	}

	return true;
}

int main() {

	string str = "abcba";
	cout << isPalindrome(str) << endl;

	return 0;
}