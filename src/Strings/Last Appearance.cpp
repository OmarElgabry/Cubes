#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

int main() {

	string str = "Find the last index of each chracter in this sTring excluding Spaces";
	int size = (int)str.size();

	// METHOD 1
	unordered_map<char, int> indexes;
	for (int i = 0; i < size; i++){
		if (isalpha(str[i]))
			indexes[str[i]] = i;
	}

	for (int i = 0; i < size; i++){
		if (isalpha(str[i]))
			printf("last index for %c is %d\n", str[i], indexes[str[i]]);
	}

	// for (unordered_map<char, int>::iterator it = indexes.begin(); it != indexes.end(); it++){
	// 	printf("last index for %c is %d\n", it->first, it->second);
	// }

	// METHOD 2
	unordered_map<char, int> cunt;

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