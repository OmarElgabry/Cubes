#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

	long long n = 12340, ans = 0;
	int d;

	while (n){

		d = n % 10;
		n = n / 10;
		ans = (ans * 10) + d;

	}
	
	cout << ans << endl;

	return 0;
}