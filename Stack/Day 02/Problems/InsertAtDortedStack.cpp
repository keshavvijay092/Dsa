#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void insertAtSorted(stack<int>&st,int element)
{
        stack<int>helper;
        while(!st.empty() && st.top()>element)
        {
            helper.push(st.top());
            st.pop();
        }
        st.push(element);
        while(!helper.empty())
        {
            st.push(helper.top());
            helper.pop();
        }
        return ;
}
void printStack(stack<int>st)
{
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    insertAtSorted(st,23);
    printStack(st);
    return 0;
}