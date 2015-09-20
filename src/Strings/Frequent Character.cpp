#include <cstdlib>
#include <iostream>
#include <string>
#include <unordered_map>
#include <iterator>
using namespace std;

int cunt[26];

int main(){

	string str = "The characTer T is The mosT frequenT characTer in This sTring";
	unordered_map<char, int>mp;

	for (int i = 0; str[i]; i++){
		if (isalpha(str[i])){
			mp[str[i]]++;
			cunt[tolower(str[i]) - 'a']++;
		}
	}

	int  mx = 0;
	char ans;

	// uppercase & lowecase using map
	for (unordered_map<char, int>::iterator it = mp.begin(); it != mp.end(); it++){
		if (mx < it->second){
			mx = it->second;
			ans = it->first;
		}
	}

	if (mx >= 1)
		cout << ans << " " << mx << endl;

	mx = 0;

	// lowercase or uppercase using int array
	for (int i = 0; i < 26; i++){
		if (mx < cunt[i]){
			mx = cunt[i];
			ans = char('a' + i);
		}
	}

	if (mx >= 1)
		cout << ans << " " << mx << endl;

	return 0;
}
