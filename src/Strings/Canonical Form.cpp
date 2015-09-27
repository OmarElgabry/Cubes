#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

const int n = 3;
vector<string> str_permutation;

void permutation(string str){

	istringstream istr(str);
	string str_list[n];
	int i = 0;

	while (istr >> str_list[i++]){
	}

	sort(str_list, str_list + n);

	do{
		string temp = "";
		for (int i = 0; i < n; i++){
			temp += str_list[i];
		}
		str_permutation.push_back(temp);
	} while (next_permutation(str_list, str_list + n));


}

int main(){

	// get all possible permutations for the passed string
	permutation("Happy Coding Day");

	// check if each string equals to the canonical form(all possible permutations for above string)
	string queries[n] = { "HappyCodingDay", "NotEqualToCanonicalForm", "DayHappyCoding" };
	int size = (int)str_permutation.size();

	for (int i = 0; i < n; i++){
		for (int j = 0; j < size; j++){
			if (queries[i] == str_permutation[j]){
				cout << "Found: " << queries[i] << endl;
				break;
			}
		}
	}

	return 0;
}
