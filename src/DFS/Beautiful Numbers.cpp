#include <cstdlib>
#include <iostream>
using namespace std;

const int len = 3, max_number = 4;
char cur[len];

void beautiful_numbers(int i){

	if (i == len){
		cout << cur << endl;
		return;
	}

	for (int j = 1; j <= max_number; j++){
		cur[i] = char(j + 48);
		beautiful_numbers(i + 1);
	}

}
int main(){

	beautiful_numbers(0);

	return 0;
}