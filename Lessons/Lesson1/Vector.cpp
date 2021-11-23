#include <iostream>
#include "Product.h"
#include "StatVector.h"
#include "CustomVector.cpp"

using namespace std;

int main()
{
	Product a("Hello", 3), b(a), c("World", 22), d("!", 0);

	CustomVector<Product> test = 5;

	test.Set(0, &a);
	test.Set(1, &b);
	test.Set(2, &c);
	test.Set(3, &d);

	Product* dd = test[0];
	dd->Print();

	test.Print();

	system("pause");
}
