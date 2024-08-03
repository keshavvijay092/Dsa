#include <iostream>
using namespace std;

class CircularQueue {
public:
    int *arr;
    int size;
    int front;
    int rear;

    CircularQueue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int x) {
        // full queue
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) {
            cout << "Circular Queue is Full" << endl;
            return; // Added return to avoid executing further
        }
        // single element 
        else if (front == -1) { // Corrected condition
            front = rear = 0;
            arr[rear] = x;
        }
        // circular nature
        else if (rear == size - 1 && front != 0) {
            rear = 0;
            arr[rear] = x;
        }
        else {
            rear++;
            arr[rear] = x;
        }
    }

    void pop() {
        // empty queue
        if (front == -1) {
            cout << "Underflow" << endl;
            return;
        }
        // single element
        else if (front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        // circular queue
        else if (front == size - 1) {
            arr[front] = -1;
            front = 0;
        }
        // normal popping
        else {
            arr[front] = -1;
            front++;
        }
    }

    void print() {
        cout << "Printing queue" << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50); // Full queue after this push
    q.print();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.print();
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90); // Full queue after this push
    q.print();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.print();
    q.pop(); // Underflow here
    q.print();
    q.pop(); // Underflow here

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