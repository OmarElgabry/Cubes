#include <cstdlib>
#include <iostream>
#include <queue>
using namespace std;

int main(){

	int goal = 447, front, left, right;
	queue <int> q;
	q.push(0);

	while (!q.empty()){

		front = q.front();
		q.pop();

		left = front * 10 + 4;
		right = front * 10 + 7;

		// check if left is the goal
		printf("%d\n", left);
		if (left == goal){
			break;
		}

		// then check if right is the goal
		printf("%d\n", right);
		if (right == goal){
			break;
		}

		q.push(left);
		q.push(right);
	}

	return 0;

}