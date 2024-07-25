// 2 stack in a 1 array 
// int arr 
// top1 top2
// size 


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class TwoStack{
public:
int size;
int top1;
int top2;
int *arr;
 
  TwoStack(int size)
  {
    this->size = size;
    top1 = -1;
    top2 = size;
    arr = new int[size];
  }

  void push1(int num)
  {
    if((top2-top1) >1)
    {
        top1++;
        arr[top1] = num;

    }
    else
    {
        cout<<"stack overflow";
    }
  }

  //push in top2 
  void push2(int num)
  {
    if((top2-top1) >1)
    {
        top2--;
        arr[top2]= num;
    }
    else
    {
        cout<<"this is full"<<endl;
    }
  }
// pop 

int pop1(){
    if(top1>=0)
    {
        int ans = arr[top1];
         top1--;
         return ans;
    }
    else
    {
        return -1;
    }
}
int pop2()
{
    if(top2<size)
    {
        int ans = arr[top2];
        top2++;
        return ans;

    }
    else
    {
        return -1;
    }
}
};
int main()
{
    TwoStack st(5); 
    st.push1(5); 
    st.push2(10); 
    st.push2(15); 
    st.push1(11); 
    st.push2(7); 
    cout << "Popped element from stack1 is " << st.pop1(); 
    st.push2(40); 
    cout << "\nPopped element from stack2 is " << st.pop2(); 
    return 0;
}