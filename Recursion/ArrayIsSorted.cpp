#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isSorted(int arr[],int n)
{
    if(n <=0) return true;

    if(arr[n] < arr[n-1]) return false;

    return isSorted(arr,n-1);
    }
int main()
{
    int arr[] = {9,3,4,6,2,9};
    int n = 6;
    if(isSorted(arr,n-1))cout<<" han bhai sahi hai";
    else cout<<" nhi bhai galat hai";

    return 0;
}