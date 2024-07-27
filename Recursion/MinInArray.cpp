#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void minAns(int arr[],int n,int&ans)
{
    if(n<0) return ;

    ans = min(arr[n],ans);
    minAns(arr,n-1,ans);
    return ;



}
int main()
{
    int arr[] = {1,3,4,2,-1};
    int ans = INT_MAX;
    int n = 5;
    minAns(arr,n-1,ans);
    cout<<"The min ans is: "<<ans;
    return 0;
}