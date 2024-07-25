#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int fractionalKnapsack(vector<int>val,vector<int>wt,int n,int capacity)
{
vector<float>Ratio;

for(int i=0;i<n;i++)
{
    float ratio = (val[i]*1.0)/wt[i];
    Ratio.push_back(ratio);

}

priority_queue< pair<float,pair<int,int>>>qt;

for(int i=0;i<n;i++)
{
    qt.push({Ratio[i],{val[i],wt[i]}});
}
int totalval = 0;
while(capacity != 0 && !qt.empty())
{
    auto front = qt.top();
    float ratio = front.first;
    int val = front.second.first;
    int wt = front.second.second;
    qt.pop();
    if(capacity>=wt)
    {
        totalval +=val;
        capacity -=wt;
    }
    else
    {
       int valToadd = ratio * capacity;
       totalval +=valToadd;
       capacity = 0;
       break;
    }
}
return totalval;
}
int main()
{
    vector<int>val = {60,100,120};
    vector<int>wt = {10,20,30};
    int n = 3;
    int capacity = 50;
    int ans = fractionalKnapsack(val,wt,n,capacity);
    cout<<"Final ans:" <<ans;
    return 0;
}