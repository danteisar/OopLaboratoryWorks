#pragma once
#include <cstddef>

class StatVector
{
private:
	struct Node {
		void* data = NULL;
		Node* next = NULL;
	public:
		Node() {
			data = NULL;
			next = NULL;
		}
	};
	Node* start = NULL;	
	Node* GetNode(int i);
	void Remove(Node*& node);
public:
	StatVector(int count);
	void Set(int i, void* data);
	void* Get(int i);
	void* operator [](const int i);
	~StatVector();
};

