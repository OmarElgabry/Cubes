#include <cstdlib>
#include <iostream>
using namespace std;

int gcd(int a, int b) {

	if (b == 0)
		return a;

	return gcd(b, a%b);
}

int lcm(int a, int b){
	return (a / gcd(a, b)) * b;
}

int main(){

	cout << gcd(6, 28) << endl;
	cout << lcm(6, 28) << endl;

	return 0;
}