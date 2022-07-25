#include <bits/stdc++.h>
using namespace std;
/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data  " << value << endl;
    }
};
void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void InsertAtHead(Node *&head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // inserting at last position
    if (temp->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }
    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head)
{
    // Deleting start Node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }
    // Deletiing any middle or last Node
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next=NULL; 
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    cout << node1->data << endl;
    cout << node1->next << endl;
    Node *head = node1;
    Node *tail = node1;
    print(head);
    InsertAtHead(head, 12);
    // InsertAtTail(tail, 100);
    print(head);
    // print(tail);
    // InsertAtTail(tail, 150);
    InsertAtHead(head, 150);
    print(head);
    // print(tail);
    InsertAtPosition(tail, head, 4, 22);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    deleteNode(2, head);
    print(head);
    return 0;
}