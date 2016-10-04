#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <iterator>
#include <algorithm>
#include <math.h>
#include <sstream>     
#include <cmath> 
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <numeric> 
#include <locale>
#include <set>
#include <stack>
#include <stdio.h>
#include <queue>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <bitset>
#include <typeinfo>
#include <functional>
#include <list>
#include <stdlib.h>
#include <time.h>
using namespace std;

/**
* Path Finding Algorithms.
* 
* @license    http://opensource.org/licenses/MIT The MIT License (MIT)
* @author     Omar El Gabry <omar.elgabry.93@gmail.com>
*/

/**
* A node.
*/
struct Node {

	/**
	* the value
	*
	* @var int
	*/
	int value;

	/**
	* the distance from the root node(or from root node + heuristics)
	* the distance could be useful to search for the shortest path between nodes in the tree(i.e. from starting node till goal node)
	* 
	* @var int
	*/
	int distance;
	
	/**
	* a reference to parent node
	* the parent of each node can be useful to access the nodes from the goal up to the starting node.
	* 
	* @var Node*
	*/
	struct Node *parent;
	
	/**
	* list of node's children
	*
	* @var list<Node *>
	*/
	list<Node *> children;

};

/**
* The Tree Class.
*/
class Tree {

	/**
	* number of nodes
	*
	* @var int
	*/
	int N;
	
	/**
	* pointer to an array containing tree nodes
	*
	* @var list<Node *>
	*/
	list<Node *> nodes;
	
	/**
	* mark visited nodes
	* it needs to be cleared every time you run an algorithm
	* 
	* @var bool
	*/
	bool *visited;
	
	/**
	* distances between every two connected nodes
	*
	* @var int
	*/
	int **dist_between;

public:
	Tree(int N);
	
	Node * createNode(int value);
	void add_edge(Node *parent, Node *child);
	void reset();
	
	Tree & print_tree(Node *root);
	Tree & print_path(Node *goal);
	
	int get_distance(Node *parent, Node *child);
	int get_heuristics(Node *current, Node *goal);
	Node * get_min_node();
	
	Node * BFS(Node *root, Node *goal);
	Node * DFS(Node *root, Node *goal);
	Node * DFS_R(Node *current, Node *goal, Node *best);
	Node * DFS_Iterative(Node *root, Node *goal);
	Node * Dijkstra(Node *root, Node *goal);
	Node * Greedy(Node *root, Node *goal);
	Node * Astar(Node *root, Node *goal);
};

/**
* Constructor
*
* @param int N
*/
Tree::Tree(int N) {

	this->N = N;

	// mark all the nodes as not visited
	this->visited = new bool[N];
	for (int i = 0; i < N; i++)
		this->visited[i] = false;

	// assign initial value for distance between every two connected nodes
	this->dist_between = new int *[N];
	for (int i = 0; i < N; ++i) {
		this->dist_between[i] = new int[N];
		for (int j = 0; j < N; j++){
			this->dist_between[i][j] = (i == j) ? 0 : NULL;
		}
	}
}

/**
* Creates a new node.
*
* @param int value
* @return Node*
*/
Node * Tree::createNode(int value) {

	Node *node = new Node;
	node->value = value;
	node->distance = 0;
	node->parent = NULL;

	this->nodes.push_back(node);

	return node;
}

/**
* Add an edge to tree.
*
* @param Node* parent
* @param Node* child
*/
void Tree::add_edge(Node *parent, Node *child){

	// Add child to parent's list.
	parent->children.push_back(child);		
}

/**
* Reset the tree to it's origianl state.
*
*/
void Tree::reset(){

	for (int i = 0; i < N; i++)
		this->visited[i] = false;
}

/**
* Print every node and it's children.
*
* @param Node* root
*/
Tree & Tree::print_tree(Node *root){
	
	for (Node *&current : this->nodes){
		printf("Node %c connected to: ", ('A' + current->value));
		for (Node *&child : current->children){
			printf("%c ", ('A' + child->value));
		}
		printf("\n");
	}

	return *this;
}

/**
* Print the path from the goal node up to the root node
*
* @param Node* current
*/
Tree & Tree::print_path(Node *goal){

	printf("The path from goal node to root node: ");

	Node *current = goal;

	// TODO 
	// compute cost for every algorithm(the way to compute the cost for every algorithm might be different)
	int cost = 0;

	while (current != NULL){
		printf("%c ", ('A' + current->value));
		current = current->parent;
	}

	// printf("\t with cost: %d ", cost);
	printf("\n");

	return *this;
}

/**
* Get distance between two nodes.
*
* @param Node* current
* @param Node* child
* @return int
*/
int Tree::get_distance(Node *parent, Node *child){

	// check if distance already assigned
	int distance = this->dist_between[parent->value][child->value];
	if (distance != NULL){
		return distance;
	}

	// if not, generate a random distance between parent and child node
	int random = (int)rand() % 10 + 1;
	this->dist_between[parent->value][child->value] =
		this->dist_between[child->value][parent->value] = random;

	// printf("Distance from %c to %c = %d \n",
	//	('A' + parent->value), ('A' + child->value), random);

	return random;
}

/**
* Get the heuristic distance between a node and the goal.
*
* @param Node* current
* @param Node* goal
* @return int
*/
int Tree::get_heuristics(Node *current, Node *goal){

	int distance = abs(goal->value - current->value);

	// printf("Heuristic distance from %c to %c = %d \n",
	// 	('A' + current->value), ('A' + goal->value), distance);

	return distance;
}

/**
* Get the node with minimum distance.
*
* @return Node*
*/
Node * Tree::get_min_node(){

	Node * next = NULL;
	int mn = INT_MAX;

	for (Node *&node : this->nodes){
		if (!this->visited[node->value] && node->distance < mn){
			mn = node->distance, next = node;
		}
	}

	return next;
}

/**
* Find goal node from root node using BFS.
*
* @param Node* root
* @param Node* goal
* @return Node*
*/
Node * Tree::BFS(Node *root, Node *goal){

	if (root->value == goal->value)
		return root;

	queue<Node *> q;
	q.push(root);

	while (!q.empty()){

		Node * current = q.front();
		q.pop();	
		this->visited[current->value] = true;

		for (Node *&child : current->children){
			if (!this->visited[child->value]){				// check if not visited
				child->distance = current->distance + 1;	// every level we increment by 1, so all nodes at level 2 has distance of 2.
				child->parent = current;

				if (child->value == goal->value)
					return child;							// if goal node is found, then it's guranteed that this node has the shortest path
				q.push(child);								// since the bfs searches the tree level by level.
			}
		}					
	}

	return NULL;
}

/**
* Find goal node from root node using DFS(Recursive).
*
* @param Node* root
* @param Node* goal
* @return Node*
*/
Node * Tree::DFS(Node *current, Node *goal){

	this->visited[current->value] = true;

	if (current->value == goal->value)
		return current;

	for (Node *&child : current->children){
		if (!this->visited[child->value]){
			child->distance = current->distance + 1;
			child->parent = current;

			Node * found = this->DFS(child, goal);
			if (found != NULL) return found;
		}
	}

	return NULL;
}

/**
* Find goal node from root node using DFS(Recursive)
* The difference between this method & DFS() is that:
* 1. If a node X is explored, it can be explored again as long as there is no node X in the path up to the starting node.
* 2. If the node X is the goal, the algorithm will try to search for another shorter path to the goal node.
*
* @param Node* root
* @param Node* goal
* @return Node*
*/
Node * Tree::DFS_R(Node *current, Node *goal, Node *best = NULL){

	this->visited[current->value] = true;

	if (current->value == goal->value){
		if (best == NULL || best->distance > current->distance) 
			best = current;
		return best;
	}
	
	for (Node *&child : current->children){
		if (!this->visited[child->value]){
			child->distance = current->distance + 1;
			child->parent = current;

			this->visited[child->value] = true;
			best = this->DFS_R(child, goal, best);
			this->visited[child->value] = false;

		}
	}

	return best;
}

/**
* Find goal node from root node using DFS(Iterative)
*
* @param Node* root
* @param Node* goal
* @return Node*
*/
Node * Tree::DFS_Iterative(Node *root, Node *goal){

	if (root->value == goal->value)
		return root;

	stack<Node *> s;
	s.push(root);

	while (!s.empty()){

		Node * current = s.top();			// get the last inserted node
		s.pop();
		this->visited[current->value] = true;

		for (Node *&child : current->children){
			if (!this->visited[child->value]){

				// we can also keep track of the distance and the parent node
				// to get the shortest path to the goal, and access the nodes from the goal up to the starting node.
				child->distance = current->distance + 1;
				child->parent = current;

				if (child->value == goal->value)	// instead of returning true, we can keep track of the goal node with the shortest distance from the root.
					return child;

				s.push(child);
			}
		}						 
	}

	return NULL;
}

/**
* Find goal node from root node using Dijkstra(Uniform)
*
* @param Node* root
* @param Node* goal
* @return Node*
*/
Node * Tree::Dijkstra(Node *root, Node *goal){

	for (Node *&node : this->nodes){
		node->distance = INT_MAX;
	}
	
	root->distance = 0;
	int count = this->N;

	while (count--){

		// everytime we choose the node with the min distance from the starting node.
		// root node will be selected first.
		Node * current = this->get_min_node();		
		this->visited[current->value] = true;

		if (current->value == goal->value){
			return current;
		}

		for (Node *&child : current->children){
			if (!this->visited[child->value]){

				int alt = current->distance + this->get_distance(current, child);

				// A shorter path to child has been found
				if (alt < child->distance){									
					child->distance = alt;
					child->parent = current;
				}
			}
		}
	}

	return NULL;
}

/**
* Find goal node from root node using Greedy
*
* @param Node* root
* @param Node* goal
* @return Node*
*/
Node * Tree::Greedy(Node *root, Node *goal){

	Node * current = root;

	while (current->value != goal->value){

		Node * next_node = NULL;
		int mn = INT_MAX;

		this->visited[current->value] = true;

		for (Node *&child : current->children){
			if (!this->visited[child->value]){
				child->parent = current;
				child->distance = this->get_heuristics(child, goal);

				// we choose what child node appears to be the immediate optimal choice
				// based on which child node has the min heuristics distance to the goal. 
				if (mn > child->distance){
					mn = child->distance;
					next_node = child;
				}
			}
		}
			
		current = next_node;
	}

	return current;
}

/**
* Find goal node from root node using A*
*
* @param Node* root
* @param Node* goal
* @return Node*
*/
Node * Tree::Astar(Node *root, Node *goal){

	for (Node *&node : this->nodes){
		// distance of every node here represents the distance from the root node + heuristics.
		node->distance = INT_MAX;
	}

	root->distance = 0 + get_heuristics(root, goal);
	Node * current = NULL;

	while (true){

		// everytime we choose the node with the min distance from the starting node + heuristics
		Node * current = this->get_min_node();

		// if all nodes have been explored, and goal node wasn't found.
		if (current == NULL) break;

		this->visited[current->value] = true;
		if (current->value == goal->value)
			return current;

		for (Node *&child : current->children){
			if (!this->visited[child->value]){
				
				int d = this->get_distance(current, child);
				int h = get_heuristics(child, goal);
				int alt = (current->distance - get_heuristics(current, goal)) + d + h;
				// int alt = this->get_distance(root, current) + d + h;

				// A shorter path to child has been found
				if (alt < child->distance){
					child->distance = alt;
					child->parent = current;

					// this node is now available to be re-explored again since a new shorter path to this node has been discovered.
					// if however, the heuristic function is monotonic (or consistent), which is a frequent case, then nodes can be explored only once.
					this->visited[child->value] = false;
				}
			}
		}	
	}

	return NULL;	
}

int main() {

	// initialize random seed
	srand((unsigned int) time(NULL));

	// initialize a new tree instance
	const int num_nodes = 7;
	Tree tree(num_nodes);

	// create nodes
	Node * nodes[num_nodes];
	for (int i = 0; i < num_nodes; i++){
		nodes[i] = tree.createNode(i);
	}

	// create edges
	vector< vector <int > > node_edges = { 
			{ 1, 2 }, 
			{ 0, 3, 4 }, 
			{ 0, 3, 5 }, 
			{ 1, 2, 4 }, 
			{ 1, 3, 6 }, 
			{ 2, 6 }, 
			{ 4, 5 }
	};

	for (int i = 0; i < num_nodes; i++){
		for (int j = 0; j < (int) node_edges[i].size(); j++){
			tree.add_edge(nodes[i], nodes[node_edges[i][j]]);
		}
	}

	// define root and goal nodes
	Node * A = nodes[0], * G = nodes[6];

	// print the tree
	tree.print_tree(A);

	// run each algorithm & print the path from the goal up to the root node
	// dont' forget to reset the tree after running each algorithm
	tree.print_path(tree.BFS(A, G)).reset();
	tree.print_path(tree.DFS(A, G)).reset();
	tree.print_path(tree.DFS_R(A, G)).reset();
	tree.print_path(tree.DFS_Iterative(A, G)).reset();
	tree.print_path(tree.Dijkstra(A, G)).reset();
	tree.print_path(tree.Greedy(A, G)).reset();
	tree.print_path(tree.Astar(A, G)).reset();

	return 0;
}