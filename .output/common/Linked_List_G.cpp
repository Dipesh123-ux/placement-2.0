#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << "\n";
}

void printAddress(Node* n)
{
    while (n != NULL) {
        cout << "| " << n->prev << " ~ " << n << " ~ " << n->next << " |";
        n = n->next;
    }
    cout << "\n";
}

void deleteNode(Node** head, int key)
{

    Node* temp = *head;
    Node* prev = NULL;

    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        (*head)->prev = NULL;
    } else {
        while (temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL)
            return;

        prev->prev->next = temp->next;
        prev->next->prev = temp->prev;
    }
    printList(*head);

    delete temp;
    delete prev;

    return;
}

void addNode_After(Node** head, int data, int val)
{
    Node* temp = *head;

    Node* New_Node = new Node();
    New_Node->data = data;
    New_Node->next = NULL;

    while (temp->next != NULL && temp->data != val) {
        temp = temp->next;
    }

    New_Node->next = temp->next;
    New_Node->prev = temp;

    temp->next = New_Node;
    temp->next->prev = New_Node;
}

void addNode_At(Node** head, int data, int pos)
{
    Node* temp = *head;

    Node* New_Node = new Node();
    New_Node->data = data;
    New_Node->next = NULL;

    for (int i = 0; i < pos - 1; ++i) {
        if (temp->next != NULL) {
            temp = temp->next;
        }
    }

    New_Node->next = temp->next;
    New_Node->prev = temp;

    temp->next = New_Node;
    temp->next->prev = New_Node;
}

void addNode_Start(Node** head, int data)
{
    Node* last = *head;

    Node* New_Node = new Node();
    New_Node->data = data;
    New_Node->next = NULL;

    if ((*head) == NULL) {
        (*head) = New_Node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }
    last->next = New_Node;
    New_Node->prev = last;
}

void addNode_End(Node** head, int data)
{
    Node* New_Node = new Node();

    New_Node->data = data;

    New_Node->next = (*head);
    New_Node->prev = NULL;

    if ((*head) != NULL) {
        (*head)->prev = New_Node;
    }

    *head = New_Node;
}

int main()
{
    int choice = 1, data, pos, key;
    Node* head = NULL;

    cout << "\nLinked List Manipulator"
         << "\n 1.) Append Value at the End"
         << "\n 2.) Append Value at the Start"
         << "\n 3.) Append Value at Specific Position"
         << "\n 4.) Append Value after a Specific Value"
         << "\n 5.) Delete a node having a Specific Value"
         << "\n 6.) Print The Linked List"
         << "\n 7.) Print Addreses"
         << "\n 8.) Exit";


    while (1) {

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\nEnter Value to add at the End : ";
            cin >> data;
            addNode_End(&head, data);
            break;
        case 2:
            cout << "\nEnter Value to add at the Start : ";
            cin >> data;
            addNode_Start(&head, data);
            break;
        case 3:
            cout << "\nEnter Value to add at Specific Position : ";
            cin >> data;
            cout << "\nEnter the Position : ";
            cin >> pos;
            addNode_At(&head, data, pos);
            break;
        case 4:
            cout << "\nEnter Value to add After Specific Value : ";
            cin >> data;
            cout << "\nEnter the Value : ";
            cin >> key;
            addNode_After(&head, data, key);
            break;
        case 5:
            cout << "\nEnter Value to Delete : ";
            cin >> data;
            deleteNode(&head, data);
            break;
        case 6:
            printList(head);
            break;
        case 7:
            printAddress(head);
            break;
        default:
            return 0;
        }
    }

    return 0;
}
