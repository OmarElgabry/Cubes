#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	vector<pair<string, int>> guesses;
	guesses.push_back(make_pair(">=", 1));
	guesses.push_back(make_pair(">=", 3));  // same as !(NUM < 3)
	guesses.push_back(make_pair(">", -3));  // same as !(NUM <= -3)
	guesses.push_back(make_pair("<=", 55)); // same as !(NUM > 55)

	int size = (int)guesses.size();
	int const MAX = 1000000, MIN = -1000000;
	int left = MIN, right = MAX;

	for (int i = 0; i < size && left <= right; i++){
		if (guesses[i].first == ">=" && left < guesses[i].second){
			left = guesses[i].second;
		}
		else if (guesses[i].first == ">" && left <= guesses[i].second){
			left = guesses[i].second + 1;
		}
		else if (guesses[i].first == "<=" && right > guesses[i].second){
			right = guesses[i].second;
		}
		else if (guesses[i].first == "<" && right >= guesses[i].second){
			right = guesses[i].second - 1;
		}
	}

	if (left > right){
		cout << false << endl;
	}
	else if (left == MIN && right != MAX){
		printf("[-infinity, %d]\n", right);
	}
	else if (left != MIN && right == MAX){
		printf("[%d, +infinity]\n", left);
	}
	else{
		printf("[%d, %d]\n", left, right);
	}

	return 0;

}