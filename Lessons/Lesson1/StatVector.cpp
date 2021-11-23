#include "StatVector.h"
#include <cstddef>

StatVector::Node* StatVector::GetNode(int i)
{	
	Node* tmp = start;
	while (i-- > 0) {
		tmp = tmp->next;
	}
	return tmp;
}

StatVector::StatVector(int count)
{	
	for (size_t i = 0; i < count; i++)
	{
		Node* tmp = new Node();
		tmp->next = start;
		tmp->data = NULL;
		start = tmp;
	}
}

void StatVector::Set(int i, void* data)
{
	GetNode(i)->data = data;
}

void* StatVector::Get(int i)
{
	Node* tmp = GetNode(i);
	
	return tmp->data;
}

void* StatVector::operator[](const int i)
{
	return Get(i);
}

void StatVector::Remove(Node*& node)
{
	if (node != NULL) {
		Remove(node->next);
		delete node;
	}
}

StatVector::~StatVector()
{
	Remove(start);
}
