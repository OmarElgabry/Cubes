#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

int main() {

	unordered_map<char, int> cunt;
	string str = "Find the last index of each chracter in this sTring excluding Spaces";
	int size = (int)str.size();

	for (int i = 0; i < size; i++){
		if (isalpha(str[i]))
			cunt[str[i]]++;
	}

	for (int i = 0; i < size; i++){
		if (isalpha(str[i])){
			cunt[str[i]]--;
			if (cunt[str[i]] == 0){
				printf("last index for %c is %d\n", str[i], i);
			}
		}
	}

	return 0;
}