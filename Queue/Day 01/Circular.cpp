#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class CircularQueue{
public:
 int *arr;
 int size;
 int front ;
 int rear;
CircularQueue(int size)
{
this->size = size;
arr = new int[size];
front = -1;
rear = -1;
}
void push(int x)
{
    // overflow 
    if((front == 0 && rear == size-1) || (rear == front-1))
    {
      cout<<"Queue is full"<<endl;   
    }
    // first element 
     else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[rear] = x;
    }
    // circular nature 
    else if(rear == size-1 && front !=0)
    {
        rear = 0;
        arr[rear] = x;
    }
    else
    {
        rear++;
        arr[rear] = x;
    }
}

void pop()
{
    // underflow 
    if(front == -1 && rear == -1) cout<<"underflow"; 
    // single element 
    else if(front == rear)
    {
        arr[front] = -1;
       front = rear = -1;
       
    }
    else if(front == size-1)
    {
        arr[front] = -1;
        front = 0;
    }
    else
    {
        arr[front] = -1;
        front++;
    }
}

void print()
{
    cout<<"Printing Queue"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
~CircularQueue()
{
    cout<<"Destructor called"<<endl;
    delete[]arr;
}
};
int main()
{
    CircularQueue q(5);
    q.print();
     q.push(10);
    q.push(10);
    q.push(10);
    q.push(10);
    q.push(69);
    q.push(10);
    q.print();
    q.pop();
    q.pop();
    q.pop();
    q.pop();q.print();
    q.push(69);
    q.push(190);
    q.push(1902);
    q.push(190);
    q.push(0);
    q.print();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();

    return 0;
}














































// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// class CQueue{
//     public:
//     int size;
//     int *arr;
//     int front;
//     int rear;

//     CQueue(int size)
//     {
//         this->size = size;
//         arr = new int[size];
//         front =-1;
//         rear = -1;
//     }
 

//   void push(int data)
//   {
//     //queue is full 
//     if(front == 0 && rear == size-1)
//     {
//         cout<<"Q is full";
//     }
//     else if(front == -1)
//     {
//         front = 0;
//         rear = 0;
//         arr[rear] = data;
//     }
//     else if(rear == size-1 && front != 0)
//     {
//         rear = 0;
//         arr[rear] = data;
//     }
//     else
//     {
//         rear++;
//         arr[rear] = data;
//     }
//   }

//   void pop()
//   {
//     //  empty check 
//     // single element 
//     // circular nature 
//     // normal flow 
//     if(rear == -1)
//     {
//         cout<<"Queue is empty";
//     }
//     else if(front == rear)
//     {
//         arr[front] = -1;
//         front = -1;
//         rear = -1;
//     }
//     else if(front == size-1)
//     {
//         front = 0;
//     }
//     else
//     {
//         arr[front] = -1;
//         front++;
//     }
//   }

// };
// int main()
// {
//     CQueue qt(2);
//     qt.push(1);
//     qt.push(5);
//     qt.push(7);
//     qt.pop();
//     qt.pop();qt.pop();qt.pop();qt.pop();
//     return 0;
// }