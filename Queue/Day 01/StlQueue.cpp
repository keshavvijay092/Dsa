#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    queue<int>q;
    q.push(5);
    q.push(14);
    q.push(7);
    q.push(11);
    cout<<q.size() <<" ";
    cout<<q.front();
   
    q.pop();
    return 0;
}