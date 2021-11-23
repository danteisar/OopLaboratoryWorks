#pragma once
#include "Product.h"
#include <algorithm>
#include <cstddef>

using namespace std;

class Container
{
private:
	struct Node {
		Node(Product* data) : data(data) {}
		Product* data = NULL;
		Node* left = NULL;
		Node* right = NULL;
	};
	Node* root = NULL;
	bool isSorted = false;
	void Push(Product*, Node*&);
	void Print(Node*) const;
	void Sort(Node*,Node*);
	void Sort(Node*);
	void Remove(Node*&);
public:
	void Push(Product*);
	void Print() const;
	void Sort();
	~Container();
};