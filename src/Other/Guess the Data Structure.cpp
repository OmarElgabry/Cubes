#include <cstdlib>
#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <stack>
using namespace std;

int main(){

	vector<pair<string, int>> queries;
	queries.push_back(make_pair("insert", 2));
	queries.push_back(make_pair("insert", 1));
	queries.push_back(make_pair("pop", 1));
	queries.push_back(make_pair("pop", 2));

	int operations = (int)queries.size(), value;
	string query;

	stack<int>s;
	queue<int>q;
	priority_queue<int>pq;

	bool isS, isQ, isPQ;
	isS = isQ = isPQ = true;

	for (int i = 0; i < operations; i++){

		query = queries[i].first;
		value = queries[i].second;

		if (query == "insert"){
			if (isS)  s.push(value);
			if (isQ)  q.push(value);
			if (isPQ) pq.push(value);
		}
		else{

			if (s.empty() || s.top() != value){
				isS = false;
			}
			else{
				s.pop();
			}

			if (q.empty() || q.front() != value){
				isQ = false;
			}
			else{
				q.pop();
			}

			if (pq.empty() || pq.top() != value){
				isPQ = false;
			}
			else{
				pq.pop();
			}

		}
	}

	if (isS == true && isQ == false && isPQ == false)
		cout << "stack" << endl;
	else if (isS == false && isQ == true && isPQ == false)
		cout << "queue" << endl;
	else if (isS == false && isQ == false && isPQ == true)
		cout << "priority queue" << endl;
	else if (isS == false && isQ == false && isPQ == false)
		cout << "can't be any of them" << endl;
	else
		cout << "can't guess which one, It can be two or all of them" << endl;

	return 0;
}