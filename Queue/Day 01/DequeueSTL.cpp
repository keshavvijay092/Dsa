#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    deque<int>dq;

    dq.push_front(5);
    dq.push_front(10);
    dq.push_back(7);
    dq.push_back(11);

    cout<<"size of:" <<dq.size()<<endl;
     cout<<endl;
    cout<<"front:"<<dq.front()<<" ";
    cout<<"Bsck :"<<dq.back();
    dq.pop_front();
    dq.pop_back();
    cout<<endl;
    cout<<"front:"<<dq.front()<<" ";
    cout<<"Bsck :"<<dq.back();
    return 0;
}