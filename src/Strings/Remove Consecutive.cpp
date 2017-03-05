#include <cstdlib>
#include <iostream>
#include <string>
#include <stack>
using namespace std;

char c[1000001];

int main(){

	string str = "abacabaabacabaa";

	// 1st solution 
	stack<char> s;

	for (int i = 0; str[i]; i++){
		if (s.empty() || str[i] != s.top()){
			s.push(str[i]);
		}
		else{
			s.pop();
		}
	}

	string ans = "";
	while (!s.empty()){
		ans = s.top() + ans;
		s.pop();
	}

	cout << ans << endl;

	// 2nd solution 
	int indx = 0;
	for (int i = 0; str[i]; i++){
		if (indx == 0 || c[indx - 1] != str[i])
			c[indx++] = str[i];
		else
			indx--;
	}

	c[indx] = 0;

	cout << c << endl;

	return 0;
}