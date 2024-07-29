#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(vector<int>num,vector<int>&ans)
{
    stack<int>st;

    for(auto i:num)
    {
        while(!st.empty()&&  st.top() < i)
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
    vector<int>num1 = {7,5,9,4};
    vector<int> num2 = {3, 1, 4, 1, 5, 9, 2, 6};

    vector<int>ans;
    solve(num1,ans);
    reverse(ans.begin(),ans.end());
    for(auto i:ans)
    {
     cout<<i<<" ";   
    }
    cout<<endl;
    ans.clear();
    solve(num2,ans);
     reverse(ans.begin(),ans.end());
    for(auto i:ans)
    {
     cout<<i<<" ";   
    }
    cout<<endl;
    return 0;
}