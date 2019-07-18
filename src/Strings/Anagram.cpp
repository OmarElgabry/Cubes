#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool is_anagram(string &s1, string &s2){

	// The canonical form is: SORT(X)

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

	// METHOD 1 - Brute Force

	// store all permutation of string A
	vector<string> permu_A;

	sort(A.begin(), A.end());

	char *char_A = new char[size_A + 1];
	strcpy(char_A, A.c_str());

	do{
		permu_A.push_back(char_A);
	} while (next_permutation(char_A, char_A + size_A));

	int n_permu = (int)permu_A.size();
	for (int i = 0; i < size_B - size_A + 1; i++){
		string sub_string = B.substr(i, size_A);
		for (int j = 0; j < n_permu; j++){
			if (permu_A[j] == sub_string){
				printf("A occures as anagram in B from index %d to %d\n", i, i + size_A - 1);
				break;
			}
		}
	}


	// METHOD 2 - Canonical Form

	// sort A once here, intead of sorting A everytime in is_anagram()
	sort(A.begin(), A.end());

	for (int i = 0; i < size_B - size_A + 1; i++){
		string sub_string = B.substr(i, size_A);
		if (is_anagram(A, sub_string)){
			printf("A occures as anagram in B from index %d to %d\n", i, i + size_A - 1);
		}
	}

	// METHOD 3 - Recording count of letters

	for (int i = 0; i < size_B - size_A + 1; i++){

		// Instead of using one map, we can use two, one for string A, and another for each substring of B.
		// So, every loop, check if both maps have the same size, 
		// and every character in map A exists in map B with the same number of apperance.
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
	
	// METHOD 4 - Recording count of letters (using Window)
	// 1. Record all values in A (by decrementing) 
	// 2. Record only the first size_A-1 values in B (by adding). This has to be the opposite of previous step.
	// 3. For loop: i = size_A-1 -> size_B - size_A + 1
	//	Add value at [i] and decrement value at [i - size_A] (assume i-size_A >= 0)
	//	Check to see if all values in map are zeros 
	// Problems: 
	//	- Map actually increases with every loop while in METHOD 3, it has a max size of 2*size_A
	// 	- Even if it is not, the complexity is the same: O(N * size_A). 
	//	- In fact, METHOD 4 takes O(N^2) because of the growing Map.

	return 0;
}
