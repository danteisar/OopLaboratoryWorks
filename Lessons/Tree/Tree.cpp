#include <iostream>
#include "Container.h"
#include "Product.h"

int main()
{
	Container tree;

	tree.Push(new Product(" .R. ", 0));
	tree.Push(new Product(".   .", -16));
	tree.Push(new Product(".   .", 12));
	tree.Push(new Product(".   .", -5));
	tree.Push(new Product(".   .", 11));
	tree.Push(new Product(".   .", -4));
	tree.Push(new Product(".   .", 7));
	tree.Push(new Product(".   .", -19));
	tree.Push(new Product(".   .", 20));
	tree.Push(new Product(".   .", -8));
	tree.Push(new Product(".   .", 15));	
	tree.Push(new Product(".   .", -18));
	tree.Push(new Product(".   .", 14));
	tree.Push(new Product(".   .", -13));
	tree.Push(new Product(".   .", 3));
	tree.Push(new Product(".   .", -6));
	tree.Push(new Product(".   .", 10));
	tree.Push(new Product(".   .", -2));
	tree.Push(new Product(".   .", 9));
	tree.Push(new Product(".   .", -17));
	tree.Push(new Product(".   .", 20));
	tree.Push(new Product(" BEG ", -21));
	tree.Push(new Product(" END ", 22));

	tree.Sort();
	tree.Print();
}
