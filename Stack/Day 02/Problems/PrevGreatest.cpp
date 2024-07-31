#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void PrevGreatest(int arr[],vector<int>&ans)
{
    stack<int>st;

    for(int i=0;i<6;i++)
    {
        while(!st.empty() && arr[st.top()] <= arr[i])
        {
          st.pop();
        }
        if(!st.empty() && arr[st.top()] >arr[i])
        {
            ans[i] = arr[st.top()];
        }
        st.push(i);
    }
    return ;
}
int main()
{
    int arr[] = {6,2,7,1,5,3};
    vector<int>ans(6,-1);
    PrevGreatest(arr,ans);
    cout<<"The prev greatest elements are: "<<endl;
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
// -1, 6, -1, 7, 7, 7
    return 0;
}