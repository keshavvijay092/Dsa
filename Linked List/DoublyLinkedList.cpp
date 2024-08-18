#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node* head)
{
    Node* temp = head;
    while(temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int GetLength(Node* head)
{
    int len = 0;
    Node* temp = head;
    while(temp)
    {
        temp = temp->next;
        len++;
    }
    return len; // Return the length
}

void insertAtHead(Node*& head, Node*& tail, int data)
{
    if(head == NULL) 
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node* newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(Node*& head, Node*& tail, int data)
{
    if(tail == NULL)
    {
       Node* newNode = new Node(data);
       head = newNode;
       tail = newNode;
    }
    else
    {
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtAnyPosition(Node*& head, Node*& tail, int data, int position)
{
    if(position == 1) // Insert at head if position is 1
    {
        insertAtHead(head, tail, data);
        return;
    }
    
    int len = GetLength(head);
    if(position == len + 1) // Insert at tail if position is the last
    {
        insertAtTail(head, tail, data);
        return;
    }
    
    Node* newNode = new Node(data);
    Node* temp = head;

    for(int i = 1; i < position - 1; i++) // Traverse to the node before the desired position
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void deletefromHead(Node* &head, Node*& tail)
{
    if (head == NULL) return; // Check if the list is empty

    Node* temp = head;
    head = head->next;
    if (head) // If list had more than one node
        head->prev = NULL;
    else // If the list had only one node
        tail = NULL;

    delete temp; // Free the old head
}

void deletefromTail(Node* &head, Node*& tail)
{
    if (tail == NULL) return; // Check if the list is empty

    Node* temp = tail;
    tail = tail->prev;
    if (tail) // If list had more than one node
        tail->next = NULL;
    else // If the list had only one node
        head = NULL;

    delete temp; // Free the old tail
}

void deletefromAnyPosition(Node* &head, Node* &tail, int pos)
{
    if(head == NULL || pos <= 0) return;
    
    Node* temp = head;

    if(pos == 1)
    {
        deletefromHead(head, tail);
        return;
    }

    for(int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if(temp == NULL || temp->next == NULL) return;
    
    Node* curr = temp->next;

    if(curr->next == NULL)
    {
        deletefromTail(head, tail);
    }
    else
    {
        temp->next = curr->next;
        curr->next->prev = temp;
        delete curr;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 50);
    print(head);

    insertAtTail(head, tail, 9);
    insertAtTail(head, tail, 8);
    insertAtTail(head, tail, 7);
    insertAtTail(head, tail, 5);
    insertAtTail(head, tail, 4);
    print(head);

    cout << "Insert 6 at position 9" << endl;
    insertAtAnyPosition(head, tail, 6, 9);
    print(head);

    cout << "Delete from head" << endl;
    deletefromHead(head, tail);
    print(head);

    cout << "Delete from tail" << endl;
    deletefromTail(head, tail);
    print(head);

    cout << "Delete from position 4" << endl;
    deletefromAnyPosition(head, tail, 4);
    print(head);

    return 0;
}
