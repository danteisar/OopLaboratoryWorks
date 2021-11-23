#include <iostream>
#include "Product.h"
#include "Container.h"

int main()
{
	Product a("Hello", 3), b(a), c("World", 22), d("!", 0);

	Container stack;

	stack.Push(&a);
	stack.Push(&b);
	stack.Push(&c);
	stack.Push(&d);

	stack.Sort();
	stack.Print();

	system("pause");
}

