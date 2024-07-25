#include<bits/stdc++.h>
#include<stack>
#include<iostream>
using namespace std;

int main()
{
    // creation of stack 
    stack<int>st;
    // pushing the element in the stack
    st.push(1);
    st.push(2);
    st.push(3);
    // now i will be popping the element in the stack 
//    st.pop();
   cout<<st.top()<<endl;

if(st.empty()) cout<<"empty hai";
else cout<<"empty nhi hai";
// syntax: st.empty()

cout<<st.size();

    return 0;
}