#include <iostream>
using namespace std;
struct Node
{
    string page;
    Node *next;
};
Node *top = NULL;
void visit(string p)
{
    Node *n = new Node;
    n->page = p;
    n->next = top;
    top = n;
    cout << "Current page: " << top->page << "\n";
}
void back()
{
    if (top == NULL)
    {
        cout << "No history available\n";
        return;
    }
    Node *temp = top;
    top = top->next;
    delete temp;
    if (top == NULL)
        cout << "No page left\n";
    else
        cout << "Current page: " << top->page << "\n";
}
int main()
{
    visit("Google");
    visit("YouTube");
    visit("Wikipedia");
    back();
    back();
    back();
    back();
    return 0;
}
