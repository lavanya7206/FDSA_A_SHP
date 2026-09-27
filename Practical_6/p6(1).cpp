#include <iostream>
using namespace std;
int stack[5];
int top = -1;
void place(int tray)
{
    if (top == 4)
    {
        cout << "Error: Stack is full\n";
        return;
    }
    top++;
    stack[top] = tray;
    cout << "Top tray: " << stack[top] << "\n";
}
void take()
{
    if (top == -1)
    {
        cout << "Error: Stack is empty\n";
        return;
    }
    top--;
    if (top == -1)
        cout << "Stack is empty\n";
    else
        cout << "Top tray: " << stack[top] << "\n";
}
int main()
{
    place(10);
    place(20);
    place(30);
    take();
    take();
    take();
    take();
    return 0;
}
