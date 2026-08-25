#include<iostream>
using namespace std;
struct Node
{
    int token;
    Node* next;
};
void insertFront(Node*& head,int value)
{
    Node* newNode = new Node;
    newNode->token=value;
    newNode->next=head;
    head=newNode;
}
void insertEnd(Node*& head, int value)
{
    Node* newNode = new Node;
    newNode->token=value;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node*temp=head;
    while(temp->!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void insertPosition(Node*& head,int value,int position)
{
    if(position==1)
    {
        insertFront(head,value);
        return;
    }
    Node*temp=head;
    for(i=1;i<position-1 && temp!=NULL;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        cout<<"Invalid Position!";
        return;
    }
}
