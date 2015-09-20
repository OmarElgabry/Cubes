#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {

	string str = "hello";
	int size = (int)str.size();

	for (int i = 0; str[i]; i++){
		for (int len = 0; len < (size - i); len++){
			cout << str.substr(i, len + 1) << endl;
		}
	}

	return 0;
}