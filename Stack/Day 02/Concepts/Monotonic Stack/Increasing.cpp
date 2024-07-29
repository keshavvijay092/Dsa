#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void Monotonic(vector<int>&nums,vector<int>&ans)
{
    stack<int>st;
    
    for(auto i:nums)
    {
        while(!st.empty() && st.top()> i)
        {
            st.pop();
        } 
        st.push(i);
    }

    while(!st.empty())
    {
       ans.push_back(st.top());
       st.pop();
    }
    return ;
}
int main()
{
    vector<int> nums = {3, 1, 4, 1, 5, 9, 2, 6};
    vector<int>ans;
    Monotonic(nums,ans);
    reverse(ans.begin(),ans.end());
    for(auto i:ans)
    {
        cout<<i<<" ";
    }

    return 0;
}