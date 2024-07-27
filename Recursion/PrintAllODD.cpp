#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void PrintOdd(int arr[],int n)
{
    if(n<0) return ;
     
    int val = arr[n];

    PrintOdd(arr,n-1);
    if(val&1) cout<<val<<" ";
    return ;
}
int main()
{
    int arr[] = {10,11,12,13,14,15,16,17};
    int n = 8;
    PrintOdd(arr,n);

    return 0;
}