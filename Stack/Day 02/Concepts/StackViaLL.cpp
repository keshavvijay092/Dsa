#include<bits/stdc++.h>
#include<iostream>
using namespace std;


class LL{
    public:
    int data;
    LL *next;
    LL(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack{
    public:
    LL * top ;
    int size;

    Stack()
    {
        top = NULL;
        size = 0;
    }

    void push(int x)
    {
          LL *newNode = new LL(x);
         if(!newNode) {
            cout<<"overflow";
         }
          newNode->next = top;
         top = newNode;
         size = size+1;
    }

    void pop()
    {
        if(top == NULL) {cout<<"underflow";}

        LL * temp = top;
        top = top->next;
        delete temp;
        size--;
    }
    int peek()
    {
       return top->data;
    }
    bool isEmpty()
    {
       return top == NULL;
    }

    int capacity()
    {
        return size;
    }
       void display()
       {
        LL* temp ;
        if(top == NULL) cout<<"stack underflow";
        else
        {
            temp = top;
        while(temp)
        {
            cout<<temp->data;
            temp = temp->next;
            if(temp) cout<<" -> ";
        }
        }
       }
};
int main()
{
     Stack s;
 
    // Push the elements of stack
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
    // Display stack elements
    s.display();
 
    // Print top element of stack
    cout << "\nTop element is " << s.peek() << endl;
 
    // Delete top elements of stack
    s.pop();
    s.pop();
 
    // Display stack elements
    s.display();
 
    // Print top element of stack
    cout << "\nTop element is " << s.peek() << endl;
 
    return 0;
}