#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Stack{
public:
    int top;
    int *arr;
    int size;

    // static array : int arr[];
    // dynamic array: int *arr;
    // constructor 
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(size - top >1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
          cout<<"this is a full stack means overflow"<<endl;
        }
    }
    void pop()
    {
         if(top>=0)
         {
            top--;
         }
         else
         {
            cout<<"stack is empty so it means underflow"<<endl;
         }
    }
    int peek(){
        if(top>=0)
        {
           return arr[top];
        }
        else
        {
            cout<<"stack is empty";
            return -1;
        }

    }

    bool isEmpty()
    {
     if(top == -1) return true;
     else return false;
    }

};


int main()
{
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    st.push(33);
    st.push(22);
    st.push(12);
    cout<<st.peek()<<endl;
    st.pop();
     cout<<st.peek()<<endl;
     st.pop();
     cout<<st.peek()<<endl;
     st.pop();

     st.pop();
     st.peek();
     
    return 0;
}