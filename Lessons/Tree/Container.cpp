#include "Container.h"
#include <iostream>

// ------------------------- P U S H ------------------------------

void Container::Push(Product* data)
{
    Push(data, root);
}

void Container::Push(Product* data, Node*& node)
{
    if (node == NULL) {
        node = new Node(data);      
    }
    else if (root->data->GetCount() > data->GetCount()) {
        Push(data, node->left);
    }
    else {
        Push(data, node->right);
    }
}

// ------------------------- P R I N T -----------------------------

void Container::Print() const
{
    Print(root);
}

void Container::Print(Node* node) const
{
    if (node == NULL) return;   
    Print(node->left);
    node->data->Print();
    Print(node->right); 
}

// ------------------------- S O R T ------------------------------

void Container::Sort()
{   
    if (root == NULL) return;   
   
    while (!isSorted) {
        isSorted = true;
        Sort(root);
    }   
}

void Container::Sort(Node* node)
{   
    if (node == NULL) return;
    Sort(node->left);
    Sort(node->right); 
    Sort(node, node->left);
    Sort(node->right, node);
}

void Container::Sort(Node* node1, Node* node2) {
    if (node2 != NULL && node1 != NULL) {
        if (node1->data->GetCount() < node2->data->GetCount())
        {
            swap(node1->data, node2->data);
            isSorted = false;
        }
    }
}

// ------------------------- D E S T R U C T ---------------------

void Container::Remove(Node*& node) {
    if (node == NULL) return;
    Remove(node->left);
    Remove(node->right);
    delete node;
}

Container::~Container()
{
    Remove(root);
}
