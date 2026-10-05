#include <iostream>
using namespace std;
struct Node
{
    int patient;
    Node* next;
};
Node* front = NULL;
Node* rear = NULL;
void arrive(int patient)
{
    Node* newNode = new Node;
    newNode->patient = patient;
    newNode->next = NULL;
    if (rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
    cout << "Front: " << front->patient << endl;
}
void attend()
{
    if (front == NULL)
    {
        cout << "Error: No patients waiting" << endl;
        return;
    }
    Node* temp = front;
    front = front->next;
    delete temp;
    if (front == NULL)
    {
        rear = NULL;
        cout << "Front: Empty" << endl;
    }
    else
    {
        cout << "Front: " << front->patient << endl;
    }
}
int main()
{
    arrive(101);
    arrive(102);
    arrive(103);
    attend();
    arrive(104);
    attend();
    attend();
    attend();
    attend();
    return 0;
}
