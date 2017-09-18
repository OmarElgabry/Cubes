#include <cstdlib>
#include <iostream>
#include <bitset>
using namespace std;

int main(){

	// Check if bit 0 or 1(bool)
	int num = 25, index = 3;
	bool check = ((num >> index) & 1);
	printf("4th bit from right: %d\n", check);

	// Set a bit to 1(regardless if already 1 or 0)
	index = 2;
	num = (num | (1 << index));
	printf("set 3rd bit from right to 1: %d\n", num);

	// Return 2^k, where k is th position of first 1-bit(from right)
	num = num & -num;		// -num = reverse bits of num, then add 1.
	printf("2^k: %d\n", num);

	// Get number of different bits
	int n1 = 25, n2 = 3;
	int diff = n1 ^ n2;

	// Count number of 1 bits
	int cunt = 0;
	while (diff){
		cunt += (diff & 1);
		diff >>= 1;
	}
	printf("number of different bits between n1 & n2: %d\n", cunt);

	return 0;
}
