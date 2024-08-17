#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
public:
int val;
Node* next;
  
  Node()
  {
    this->next = NULL;
  }
  Node(int data)
  {
    this->val = data;
    this->next = NULL;
  }
};

void printLL(Node* head)
{
    Node* temp = head;
    while(temp)
    {
        cout<<temp->val<<" -> ";
        temp = temp->next;
    }
}

int getLength(Node* head)
{
     Node* temp = head;
     int len = 0;
    while(temp)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

Node* insertAtHead(Node* head,int data){

 Node* temp = new Node(data);
 temp->next = head;
  head = temp;
 return head;
}

Node* insertAtTail(Node* head,int data)
{
    Node* tail = head;
    while(tail->next)
    {
        tail = tail->next;
    }
    // temp denoting tail 
    Node* newNode = new Node(data);
    tail->next = newNode;
    return head;
}

Node* insertAtPosition(Node* head,int data,int pos)
{
  int len = getLength(head);
     Node* newNode = new Node(data);
     Node* prev = NULL;
     Node* curr = head;

  while(pos != 1)
  {
    prev = curr;
    curr = curr->next;
    pos--;
  }
  prev->next = newNode;
  newNode->next = curr;
  return head;
}

Node* deleteFromHead(Node* head)
{
   Node* temp = head->next;
   head->next = NULL;
   head = temp;
   return head;
}
Node* deleteFromTail(Node* head)
{
   Node* temp = head;
   while(temp->next->next)
   {
      temp = temp->next;
   }
   temp->next = NULL;
   return head;
}
Node* deleteFromAnyPosition(Node* head,int pos)
{
     Node* temp = head;
     Node* prev = NULL;
     while(pos != 1)
     {
        pos--;
        prev = temp;
        temp =temp->next;
     }
     prev->next = temp->next;
     return head;
}
int main()
{
    //dynamically 
      Node* head = new Node(10);
     Node* head2 = new Node(20);
     Node* head3 = new Node(30);
     Node* head4 = new Node(40);
     Node* head5 = new Node(50);


    head->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = head5;



    printLL(head);
    // int ans = getLength(head);
    // cout<<endl<<"The length of the linked list "<<ans<<" ";
    // Node* newNode = insertAtHead(head,5);
    // cout<<endl<<endl<<"printing the new LL after insert "<<endl;
    // printLL(newNode);
    //  Node* newNode2 = insertAtTail(head,5);
    // cout<<endl<<endl<<"printing the new LL after insert "<<endl;
    // printLL(newNode2);
    // Node* newNode3 = insertAtPosition(head,5,2);
    // cout<<endl<<endl<<"printing the new LL after insert "<<endl;
    // printLL(newNode3);
      cout<<endl<<endl<<"delete from head"<<" "<<endl;
      Node* headDelete = deleteFromHead(head);
       printLL(headDelete);
      cout<<endl<<"delte from tail"<<endl;  
       Node* headDelete2 = deleteFromTail(headDelete);
       printLL(headDelete2);
       cout<<endl<<"any positon"<<endl;;
       Node* headDelete3  =deleteFromAnyPosition(headDelete2,2);
       printLL(headDelete3); 
    return 0;
}