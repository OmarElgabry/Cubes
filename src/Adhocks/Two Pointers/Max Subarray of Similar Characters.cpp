#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

	int cunta = 0, cuntb = 0, st = 0, mx = 0;
	string s = "aabaabaa", ans = "";
	const int n = (int)s.size(), k = 1;

	for (int end = 0; end < n; end++){
		cunta += (s[end] == 'a');
		cuntb += (s[end] == 'b');
		while (min(cunta, cuntb) > k){
			cunta -= (s[st] == 'a');
			cuntb -= (s[st] == 'b');
			st++;
		}
		if (cunta + cuntb > mx){
			mx = cunta + cuntb;
			ans = s.substr(st, mx);
		}
	}

	cout << ans << endl;

	return 0;

}