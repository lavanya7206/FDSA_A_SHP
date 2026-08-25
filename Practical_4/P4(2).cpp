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
void insert(int x)
{
    Node *newNode=new Node;
    newNode->data=x;
    newNode->next=NULL;
    newNode->prev=rear;
    if (front==NULL)
        front=rear=newNode;
    else
    {
        rear->next=newNode;
        rear=newNode;
    }
}
void deleteValue(int x)
{
    Node *temp=front;
    while (temp!=NULL && temp->data!=x)
        temp=temp->next;
    if (temp==NULL)
    {
        cout<<"Not found"<<endl;
        return;
    }
    if (temp==front)
        front=temp->next;
    else
        temp->prev->next=temp->next;
    if (temp==rear)
        rear=temp->prev;
    else
        temp->next->prev=temp->prev;
    delete temp;
}
void forward()
{
    Node *temp=front;
    cout<<"Front to Rear:";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void reverse()
{
    Node*temp=rear;
    cout<<"Rear to Front:";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    forward();
    deleteValue(20);
    forward();
    reverse();
    return 0;
}
