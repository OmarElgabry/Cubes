#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(){

	string n1, n2;
	int s1, s2;

	// METHOD 1

	n1 = "1101", n2 = "101";
	s1 = (int)n1.size();
	s2 = (int)n2.size();

	if (s1 < s2) swap(n1, n2), swap(s1, s2);
	n2.insert(0, s1 - s2, '0');

	string ans1(s1, '0');
	bool carry = false;

	for (int i = s1 - 1; i >= 0; i--){
		if (n1[i] + n2[i] == 48 + 48 && carry)
			ans1[i] = '1', carry = false;
		else if (n1[i] + n2[i] == 49 + 48 && carry)
			ans1[i] = '0';
		else if (n1[i] + n2[i] == 49 + 48)
			ans1[i] = '1';
		else if (n1[i] + n2[i] == 49 + 49 && carry)
			ans1[i] = '1';
		else if (n1[i] + n2[i] == 49 + 49)
			ans1[i] = '0', carry = true;
	}

	if (carry) ans1.insert(0, "1");
	cout << ans1 << endl;


	// METHOD 2

	n1 = "1101", n2 = "101";
	s1 = (int)n1.size() - 1;
	s2 = (int)n2.size() - 1;

	int _carry = 0;
	string ans2 = "";

	while (s1 >= 0 || s2 >= 0) {

		int sum = _carry;

		if (s1 >= 0) {
			sum += n1[s1] - '0';
			s1--;
		}
		if (s2 >= 0) {
			sum += n2[s2] - '0';
			s2--;
		}

		_carry = sum >> 1;	// shift to right, in case of sum is 2 or 3, carry will be 1.
		sum = sum & 1;		// in case sum is 1 or 3, ans will append 1.
		ans2.append(sum == 0 ? "0" : "1");
	}

	if (_carry > 0) ans2.append("1");
	reverse(ans2.begin(), ans2.end());
	cout << ans2 << endl;

	return 0;
}