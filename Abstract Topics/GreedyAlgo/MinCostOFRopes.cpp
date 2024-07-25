#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int Min(int arr[],int n)
{
    priority_queue<int,vector<int>,greater<int>> qt;

    for(int i=0;i<n;i++)
    {
        qt.push(arr[i]);
    }
    int cost = 0;
    while(qt.size()>1)
    {
        int a = qt.top();
        qt.pop();
        int b = qt.top();
        qt.pop();

        cost +=a +b;
        int sum = a +b;
        qt.push(sum);
    }
    return cost;
}
int main()
{
    int n = 4;
    int arr[] = {4, 3, 2, 6};
    int ans = Min(arr,n);
    cout<<"Final Ans"<<ans;
    return 0;
}