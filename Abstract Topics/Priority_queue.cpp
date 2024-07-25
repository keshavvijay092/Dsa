#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,20,4,6,7,60};
    priority_queue<int,vector<int>,greater<int>>qt;
    int n = 6;
    for(int i=0;i<n;i++)
    {
        qt.push(arr[i]);
    }

    while(!qt.empty())
    {
        cout<<qt.top()<<endl;
        qt.pop();
                        
    }


    return 0;
}