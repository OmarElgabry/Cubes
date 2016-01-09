#include <cstdlib>
#include <iostream>
#include <bitset>
using namespace std;

string convertToBinaryStr(int n, string &binary_str){

	if (n){
		convertToBinaryStr(n / 2, binary_str);
		binary_str += (n % 2) ? '1' : '0';
	}

	return (binary_str == "" ? "0" : binary_str);
}

int convertToBinaryInt(int n, int &binary_int){

	if (n){
		convertToBinaryInt(n / 2, binary_int);
		binary_int = binary_int * 10;
		binary_int += (n % 2);
	}

	return binary_int;
}

int convertToDecimal(string &binary_str){

	int base = 1, decimal = 0;
	for (int i = (int)binary_str.size() - 1; i >= 0; i--){
		if (binary_str[i] == '1')
			decimal += base;
		base = base * 2;
	}

	return decimal;
}

int main(){

	const int decimal_num = 26;
	string binary_str = "";
	int binary_int = 0;

	// convert decimal to binary number(integer)
	binary_int = convertToBinaryInt(decimal_num, binary_int);
	cout << binary_int << endl;

	// convert decimal to binary number(string)
	binary_str = convertToBinaryStr(decimal_num, binary_str);
	cout << binary_str << endl;

	// convert decimal to binary number(string) of 8 digits of 1s & 0s
	string binary_str2 = std::bitset<8>(decimal_num).to_string();

	// convert the integer binary to back decimal 
	int decimal = 0, remainder, base = 1;
	while (binary_int > 0){
		remainder = binary_int % 10;
		decimal = decimal + remainder * base;
		base = base * 2;
		binary_int = binary_int / 10;
	}
	cout << "convert binary: " << binary_str << " to decimal: " << decimal << endl;

	// convert the string binary to decimal back
	decimal = convertToDecimal(binary_str);
	
	cout << "convert binary: " << binary_str << " to decimal: " << decimal << endl;

	return 0;
}
