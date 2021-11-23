#include "Product.h"
#include "String.h"
#include <iostream>

using namespace std;

Product::Product() : count(0), data(NULL) {}

Product::Product(const char* data) : Product()
{	
	size_t n = strlen(data) + 1;
	this->data = new char[n];
	strcpy_s(this->data, n, data);
}

Product::Product(const char* data, int count) : Product(data)
{
	this->count = count;
}

Product::Product(const Product& product) : Product(product.data, product.count) {}

void Product::Print() const
{
	cout << "Product: " << data << "   " << count << endl;
}

int Product::GetCount() const
{
	return count;
}

Product::~Product()
{
	if (data != NULL) delete(data);
}