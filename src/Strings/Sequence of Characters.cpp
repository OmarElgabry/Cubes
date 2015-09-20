#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(){

	string str = "can you find the given characters in order?";
	string find = "yes"; // Indexes: 4, 15, 32
	int j = 0;

	for (int i = 0; str[i]; i++){
		if (str[i] == find[j]){
			j++;
		}
	}

	if (j == (int)find.size())
		cout << true << endl;
	else
		cout << false << endl;

	return 0;
}
