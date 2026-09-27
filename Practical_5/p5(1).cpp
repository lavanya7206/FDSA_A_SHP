#include <iostream>
using namespace std;
struct Node
{
    string song;
    Node *prev, *next;
};
Node *head = NULL, *tail = NULL;
void addBegin(string s)
{
    Node *n = new Node{s, NULL, head};
    if (head != NULL)
        head->prev = n;
    else
        tail = n;
    head = n;
}
void addEnd(string s)
{
    Node *n = new Node{s, tail, NULL};
    if (tail != NULL)
        tail->next = n;
    else
        head = n;
    tail = n;
}
void insertAfter(string key, string s)
{
    Node *t = head;
    while (t != NULL && t->song != key)
        t = t->next;
    if (t == NULL)
    {
        cout << "Song not found\n";
        return;
    }
    Node *n = new Node{s, t, t->next};
    if (t->next != NULL)
        t->next->prev = n;
    else
        tail = n;
    t->next = n;
}
void removeFirst()
{
    if (head == NULL)
    {
        cout << "Playlist is empty";
        return;
    }
    Node *t = head;
    head = head->next;
    if (head != NULL)
        head->prev = NULL;
    else
        tail = NULL;
    delete t;
}
void display()
{
    Node *t = head;
    int count = 0;
    cout << "Playlist: \n";
    while (t != NULL)
    {
        cout << t->song << " ";
        count++;
        t = t->next;
    }
    cout << "Total songs: " << count << "\n";
}
int main() {
    addBegin("A");
    display();
    addEnd("B");
    display();
    addEnd("C");
    display();
    insertAfter("A", "D");
    display();
    removeFirst();
    display();
    insertAfter("X", "E");
    display();
    return 0;
}
