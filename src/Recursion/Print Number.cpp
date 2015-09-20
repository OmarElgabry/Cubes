#include <cstdlib>
#include <iostream>
using namespace std;

void printNumber(int n){

	if (n){
		printNumber(n / 10);
		printf("%d", n % 10);
	}
}

void printNumberInBits(int n)	{

	if (n){
		printNumberInBits(n / 2);
		printf("%d", n % 2);
	}
}

int main(){

	int n = 213;

	printNumber(n);

	printf("\n");

	printNumberInBits(n);

	printf("\n");

	return 0;
}