#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

// A Bianry Tree node
struct Node{

	int value;
	struct Node *left, *right, *parent;
};

// A function creates a new binary tree node with given value and parent node
Node * newNode(int value, Node *parent){

	Node *node = new Node;
	node->value = value;
	node->parent = parent;
	node->left = node->right = NULL;

	return node;
}


int getHeight(Node *p) {
	int height = 0;
	while (p) {
		height++;
		p = p->parent;
	}
	return height;
}

// @see http://articles.leetcode.com/2011/07/lowest-common-ancestor-of-a-binary-tree-part-ii.html
Node *LCA(Node *p, Node *q) {

	int h1 = getHeight(p);
	int h2 = getHeight(q);
	
	// swap both nodes in case p is deeper than q.
	if (h1 > h2) {
		swap(h1, h2);
		swap(p, q);
	}

	// invariant: h1 <= h2.
	int dh = h2 - h1;
	for (int h = 0; h < dh; h++)
		q = q->parent;
	
	while (p && q) {
		if (p == q) return p;
		p = p->parent;
		q = q->parent;
	}

	return NULL;  // p and q are not in the same tree
}

// Finds the path from root node to given root node
bool findPath(Node *root, vector<int> &path, int v){

	// base case
	if (root == NULL) return false;

	// Store this node's value in path
	path.push_back(root->value);

	// Check if the v is same as root's value
	if (root->value == v)
		return true;

	// Check if v is found in left or right sub-tree
	if ((root->left && findPath(root->left, path, v)) ||
		(root->right && findPath(root->right, path, v)))
		return true;

	// If root node not in left or right sub-tree, then remove the root(current) node from the path
	path.pop_back();

	return false;
}

int LCA(Node *root, int p, int q){

	// Store paths of p and q from the root
	vector<int> p_path, q_path;

	// Find paths from root to p and root to q.
	if (!findPath(root, p_path, p) || !findPath(root, q_path, q))
		return -1;

	// Compare the paths to get the first different value
	int i;
	for (i = 0; i < (int)p_path.size() && i < (int)q_path.size(); i++)
		if (p_path[i] != q_path[i])
			break;

	return p_path[i - 1];
}

int main() {

	// Create the Binary Tree as shown below
	/*
			     _______1______
				/              \
			 ___2__           ___3__
			/      \         /      \
			4       5        6       7
		   /  
		   8
	
	*/

	Node * root = newNode(1, NULL);
	root->left	= newNode(2, root);
	root->right = newNode(3, root);

	root->left->left			= newNode(4, root->left);
	Node *q = root->left->right = newNode(5, root->left);
	root->right->left			= newNode(6, root->right);
	root->right->right			= newNode(7, root->right);
	
	Node *p = root->left->left->left = newNode(8, root->left->left);

	// If parent pointer is given
	printf("LCA(%d, %d) = %d\n", p->value, q->value, LCA(p, q)->value);

	// If parent pointer isn't given
	printf("LCA(%d, %d) = %d\n", 8, 5, LCA(root, 8, 5));

	return 0;
}