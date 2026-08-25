#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
};
Node *front=NULL;
Node *rear=NULL;
void insertFront(int x)
{
    Node *newNode=new Node;
    newNode->data=x;
    newNode->prev=NULL;
    newNode->next=front;
    if (front==NULL)
        front=rear=newNode;
    else
    {
        front->prev=newNode;
        front=newNode;
    }
}
void insertRear(int x)
{
    Node *newNode=new Node;
    newNode->data=x;
    newNode->next=NULL;
    newNode->prev=rear;
    if (rear==NULL)
        front=rear=newNode;
    else
    {
        rear->next=newNode;
        rear=newNode;
    }
}
void insertPosition(int x,int pos)
{
    if (pos==1)
    {
        insertFront(x);
        return;
    }
    Node *temp=front;
    for (int i=1;i <pos-1 && temp!=NULL;i++)
        temp=temp->next;
    if (temp==NULL)
    {
        cout<<"Invalid position"<<endl;
        return;
    }
    Node *newNode=new Node;
    newNode->data=x;
    newNode->next=temp->next;
    newNode->prev=temp;
    if (temp->next!=NULL)
        temp->next->prev=newNode;
    else
        rear=newNode;
    temp->next=newNode;
}
void display()
{
    Node *temp=front;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    insertRear(10);
    insertRear(20);
    insertRear(30);
    cout<<"After rear insertion:";
    display();
    insertFront(5);
    cout<<"After front insertion:";
    display();
    insertPosition(15,3);
    cout<<"After position insertion:";
    display();
    return 0;
}
