#include <iostream>
using namespace std;
struct Node {
    int token;
    Node* next;
};
void insertEnd(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->token = value;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
void deleteValue(Node*& head, int value) {
    if (head == NULL) {
        cout << "Queue is empty!" << endl;
        return;
    }
    if (head->token == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        if (temp->next->token == value) {
            Node* deleteNode = temp->next;
            temp->next = deleteNode->next;
            delete deleteNode;
            return;
        }
        temp = temp->next;
    }
    cout << "Token not found!" << endl;
}
void display(Node* head) {
    Node* temp = head;
    cout << "Front to Back: ";
    while (temp != NULL) {
        cout << temp->token << " ";
        temp = temp->next;
    }
    cout << endl;
}
void reversePrint(Node* head) {
    if (head == NULL) {
        return;
    }
    reversePrint(head->next);
    cout << head->token << " ";
}
int main() {
    Node* head = NULL;
    insertEnd(head, 101);
    insertEnd(head, 102);
    insertEnd(head, 103);
    insertEnd(head, 104);
    cout << "Original Queue:" << endl;
    display(head);
    cout << "\nAfter deleting patient 102:" << endl;
    deleteValue(head, 102);
    display(head);
    cout << "\nForward Traversal:" << endl;
    display(head);
    cout << "\nReverse Printing (Back to Front): ";
    reversePrint(head);
    cout << endl;
    return 0;
}
