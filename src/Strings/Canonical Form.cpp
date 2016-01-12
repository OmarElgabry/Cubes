#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool is_anagram(string &s1, string &s2){

	// sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	return s1 == s2;
}

int main() {

	string A = "car";
	string B = "xdfacrcytvharc";
	int size_A = (int)A.size();
	int size_B = (int)B.size();

	// size of A must be <= size of B
	if (size_A > size_B){
		return 0;
	}

	// METHOD 1

	// sort A once here, intead of sorting A everytime in is_anagram()
	sort(A.begin(), A.end());

	for (int i = 0; i < size_B - size_A + 1; i++){
		string sub_string = B.substr(i, size_A);
		if (is_anagram(A, sub_string)){
			printf("A occures as anagram in B from index %d to %d\n", i, i + size_A - 1);
		}
	}

	// METHOD 2

	for (int i = 0; i < size_B - size_A + 1; i++){

		unordered_map<char, int> mp;

		for (int k = 0; k < size_A; k++){
			mp[A[k]]++;
		}

		string sub_string = B.substr(i, size_A);
		for (int j = 0; j < size_A; j++){
			mp[sub_string[j]]--;
		}

		bool found = true;
		for (unordered_map<char, int>::iterator it = mp.begin(); it != mp.end(); it++){
			if (it->second != 0) {
				found = false;
				break;
			}
		}

		if (found){
			printf("A occures as anagram in B from index %d to %d\n", i, i + size_A - 1);
		}
	}

	return 0;
}