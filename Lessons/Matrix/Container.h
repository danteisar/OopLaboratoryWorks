#pragma once
#include "Product.h"
#include <cstddef>

class Container
{
private:
	struct Node {
		Node(Product* data) : data(data) {}
		Product* data = NULL;
		Node* nextRow = NULL;
		Node* nextColumn = NULL;
	};
	int size = 0;
	Node* startColumn = NULL;
	Node* endColumn = NULL;
	Node* startRow = NULL;
	Node* endRow = NULL;

	Node* GetNode(int, int);
public:
	Container(int);
	void Add(Product*);
	void Set(Product*, int, int);
	Product* Get(int, int);
	int Size();

};

