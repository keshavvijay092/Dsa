#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void MaxElement(int arr[],int n,int& ans)
{
    if(n <0) return ;

    ans = max(arr[n],ans);
    MaxElement(arr,n-1,ans);
    return ;
}
int main()
{
    int arr[] = {2,3,6,1,91,21};
    int n = 6;
   int ans = 0;
    MaxElement(arr,n-1,ans);
    cout<<"The max Element is: "<<ans;
    return 0;
}