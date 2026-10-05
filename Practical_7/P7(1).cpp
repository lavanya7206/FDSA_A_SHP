#include<iostream>
using namespace std;
int queueArr[5];
int front=-1;
int rear=-1;
void join(int token)
{
    if(rear==4)
    {
        cout<<"Queue is full. Token can't be issued. "<<endl;
        return;
    }
    if(front==-1)
    {
        front=0;
    }
    rear++;
    queueArr[rear]=token;
    cout<<"Joined: "<<token<<endl;
    cout<<"current front: "<<queueArr[front]<<endl;
}
void serve()
{
    if(front==-1)
    {
        cout<<"Queue is empty. No one can be served. "<<endl;
        return;
    }
    cout<<"Served: "<<queueArr[front]<<endl;
    if(front==rear)
    {
        front=-1;
        rear=-1;
        cout<<"Queue is empty. "<<endl;
    }
    else
    {
        front++;
        cout<<"Current front: "<<queueArr[front]<<endl;
    }
}
int main()
{
    join(101);
    join(102);
    join(103);
    serve();
    serve();
    join(104);
    join(105);
    join(106);
    serve();
    return 0;
}
