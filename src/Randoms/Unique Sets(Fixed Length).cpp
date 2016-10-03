#include <cstdlib>
#include <iostream>
#include <map>
#include <queue>
using namespace std;

int main(){

	const int n = 10;
	int arr[n] = { 1, 2, 3, 4, 4, 4, 7, 8, 9, 10 }, len = 2;

	vector<pair<int, int>> v(len);
	map<int, int>mp;
	priority_queue < pair<int, int>>pq;

	for (int i = 0; i < n; i++){
		mp[arr[i]]++;
	}

	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++){
		pq.push(make_pair(it->second, it->first));
	}

	while ((int)pq.size() > len - 1){

		for (int i = 0; i < len; i++){
			v[i] = pq.top();
			pq.pop();
			printf("%d ", v[i].second);
			v[i].first -= 1;
		}

		printf("\n");

		for (int i = 0; i < len; i++){
			if (v[i].first > 0)
				pq.push(v[i]);
		}
	}

	return 0;
}
