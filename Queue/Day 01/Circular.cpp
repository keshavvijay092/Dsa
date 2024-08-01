#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class CQueue{
    public:
    int size;
    int *arr;
    int front;
    int rear;

    CQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front =-1;
        rear = -1;
    }
 

  void push(int data)
  {
    //queue is full 
    if(front == 0 && rear == size-1)
    {
        cout<<"Q is full";
    }
    else if(front == -1)
    {
        front = 0;
        rear = 0;
        arr[rear] = data;
    }
    else if(rear == size-1 && front != 0)
    {
        rear = 0;
        arr[rear] = data;
    }
    else
    {
        rear++;
        arr[rear] = data;
    }
  }

  void pop()
  {
    //  empty check 
    // single element 
    // circular nature 
    // normal flow 
    if(rear == -1)
    {
        cout<<"Queue is empty";
    }
    else if(front == rear)
    {
        arr[front] = -1;
        front = -1;
        rear = -1;
    }
    else if(front == size-1)
    {
        front = 0;
    }
    else
    {
        arr[front] = -1;
        front++;
    }
  }

};
int main()
{
    CQueue qt(2);
    qt.push(1);
    qt.push(5);
    qt.push(7);
    qt.pop();
    qt.pop();qt.pop();qt.pop();qt.pop();
    return 0;
}