#pragma once
#include "Product.h"
#include <cstddef>

class Container
{
private:
	struct Node {
		Product* data = NULL;
		Node* next = NULL;
	};
	Node* top = NULL;
	int cnt = 0;
	Node* GetNode(int const pos);
	void Remove(Node*& node);
public:
	void Push(Product* data);
	Product* Pop();
	void Print() const;
	void Sort();
	~Container();
};

