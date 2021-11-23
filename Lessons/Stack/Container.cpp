#include "Container.h"
#include <algorithm>
#include <cstddef>

using namespace std;

Container::Node* Container::GetNode(int const pos)
{
    int cnt = 0;
    Node* tmp = top;
    while (cnt != pos) {
        tmp = tmp->next;
        cnt++;
    }
    return tmp;
}

void Container::Push(Product* data)
{
    Node* tmp = new Node();
    tmp->data = data;
    tmp->next = top;
    top = tmp;
    cnt++;
}

Product* Container::Pop()
{
    Node* tmp = top;
    top = top->next;
    cnt--;
    return tmp->data;
}

void Container::Print() const
{
    Node* tmp = top;
    while (tmp != NULL) {
        tmp->data->Print();
        tmp = tmp->next;
    }
}

void Container::Sort()
{
    int j = 0;
    Node* tmp_i, * tmp_j, * tmp_k;
    for (int i = 0; i < cnt; i++) {
        j = i;
        tmp_i = GetNode(i);
        for (int k = i; k < cnt; k++) {
            tmp_j = GetNode(j);
            tmp_k = GetNode(k);
            if (tmp_j->data->GetCount() > tmp_k->data->GetCount()) {
                j = k;
            }
        }
        swap(tmp_i, tmp_j);
    }
}

void Container::Remove(Node*& node)
{
    if (node != NULL) {
        Remove(node->next);
        delete node;
    }
}

Container::~Container()
{
    Remove(top);
}
