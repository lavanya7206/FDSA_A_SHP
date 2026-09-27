#include <iostream>
using namespace std;
struct Node
{
    string name;
    Node *next, *prev;
};
Node *head = NULL;
void join(string s)
{
    Node *n = new Node;
    n->name = s;
    if (head == NULL)
    {
        head = n;
        n->next = n;
        n->prev = n;
    }
    else
    {
        Node *last = head->prev;
        n->next = head;
        n->prev = last;
        last->next = n;
        head->prev = n;
    }
}
void leave(string s)
{
    if (head == NULL)
        return;
    Node *t = head;
    do
    {
        if (t->name == s)
        {
            if (t->next == t)
            {
                head = NULL;
            }
            else
            {
                t->prev->next = t->next;
                t->next->prev = t->prev;
                if (t == head)
                    head = t->next;
            }
            delete t;
            return;
        }
        t = t->next;
    }
    while (t != head);
}
void display()
{
    if (head == NULL)
    {
        cout << "Circle is empty\n";
        return;
    }
    Node *t = head;
    cout << "Circle: ";
    do
    {
        cout << t->name << " ";
        t = t->next;
    }
    while (t != head);
    cout << "\n";
}
int main()
{
    join("A");
    display();
    join("B");
    display();
    join("C");
    display();
    leave("B");
    display();
    leave("A");
    display();
    return 0;
}
