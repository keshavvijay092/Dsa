#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node()
    {
        this->prev = NULL;
        this->next = NULL;
    }
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
        cout<<temp->data<<" ";
        temp = temp->next;
    }
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
}

void insertAtHead(Node* head,Node* tail,int data)
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
void insertAtTail(Node* head,Node* tail,int data)
{
    
}
int main()
{

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,10);
   insertAtHead(head,tail,20);
      insertAtHead(head,tail,30);
         insertAtHead(head,tail,40);
            insertAtHead(head,tail,50);
    print(head);
    return 0;
}