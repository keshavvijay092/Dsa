#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void insertAtBottom(stack<int>&st,int val)
{
    if(st.empty()) 
    {
    st.push(val);
    return ;
    }

    int temp = st.top();
    st.pop();
    insertAtBottom(st,val);
    st.push(temp);
    return ;

}
void reverseAstack(stack<int>&st)
{
     if (st.empty()) {
        return;
    }


       int val = st.top();
       st.pop();
       reverseAstack(st);
       insertAtBottom(st,val);


}

void printStack(stack<int>st)
{
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return ;
}
int main()
{
    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
   cout << "Original Stack: ";
    printStack(st);

    reverseAstack(st);

    cout << "Reversed Stack: ";
    printStack(st);
    return 0;
}