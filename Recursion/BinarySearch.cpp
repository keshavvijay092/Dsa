#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int BinarySearch(int arr[],int target,int s,int e)
{
    if(s>e)
    {
        return -1;
    }
    int mid = s + (e-s)/2;
     
    if(arr[mid] == target) return mid;
    else if(arr[mid]<target) return BinarySearch(arr,target,mid+1,e);
    else  return BinarySearch(arr,target,s,mid-1);
 
  return 0;
}
int main()
{
    int arr[] = {1,3,5,7,8};
    int target = 3;
    int n = 5;
    int s = 0;
    int e = n-1;
    int ans = BinarySearch(arr,target,s,e);
    cout<<ans;

    return 0;
}