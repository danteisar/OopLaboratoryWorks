#pragma once
class Product
{
private:
	char* data;
	int count;
public:

	Product();
	Product(const char* data);
	Product(const char* data, int count);
	Product(const Product& product);

	void Print() const;
	int GetCount() const;

	~Product();
};