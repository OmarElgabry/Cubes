#include <cstdlib>
#include <iostream>
#include <map>
using namespace std;

long long const n = 1000000000000;
map<long long, long long> save;

long long divide(long long n){

	if (n <= 1){
		return 1;
	}

	if (save.count(n)){
		return save[n];
	}

	return save[n] = divide(n >> 1) + divide((n + 1) >> 1);
}

int main(){

	printf("%lld\n", divide(n));

	return 0;
}