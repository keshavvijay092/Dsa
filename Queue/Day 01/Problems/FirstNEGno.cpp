#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void PrintFirstNeg(int arr[],int n,int k)
{
    deque<int>dq;
    for(int i=0;i<k;i++)
    {
        if(arr[i]<0) dq.push_back(i);
    }
    for(int i=k;i<n;i++)
    {
        if(dq.empty()) cout<<"0"<<endl;
        else
        {
            cout<<arr[dq.front()]<<" ";
        }
        if(i-dq.front()>=k)
        {
            dq.pop_front();
        }
        if(arr[i]<0)dq.push_back(i);
    }
    if(dq.empty())
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<arr[dq.front()]<<" ";
    }
}
int main()
{
     int arr[7] = {2,-5,4,-1,-2,0,5};
     int n = 7;
     int k=3;
     PrintFirstNeg(arr,n,k); 
    return 0;
}