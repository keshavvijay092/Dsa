#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Queue{
    public:
    int rear;
    int front;
    int size;
    int *arr;
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int element){
             if(rear == size)
             {
                cout<<"OverFlow"<<endl;
             }
             else
             {
                arr[rear] = element;
                rear++;
             }
    }
    void pop()
    {
          if(front == rear)
          {
            cout<<"UnderFlow"<<endl;
          }
          else
          {
            arr[front] = -1;
            front++;
            if(front == rear)
            {
                front = 0;
                rear = 0;
            }
          }
    }
    int peek()
    {
          if(front == rear) cout<<"UnderFlow";
          else return arr[front];
    }

    bool IsEmpty()
    { 
          if(front == rear)return true;
          else return false;
    }
    int sizes()
    {
        if(front == rear) return 0;
         return rear-front;      
    }
};
int main()
{
        Queue qt(10);
        qt.push(5);   
         qt.push(12);      
          qt.push(32);    
           qt.push(23);    
            qt.push(13);    
            cout<<qt.sizes()<<endl;
    return 0;
}