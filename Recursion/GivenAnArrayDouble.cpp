#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void doubleit(int arr[],int n)
{
    if(n<0) return ;
    
    int val = arr[n];
    doubleit(arr,n-1);
    
    cout<<val*2<<" ";
    return ;
}
int main()
{
    int arr[ ] = {10,20,30,40,50};
    int n = 5;
    doubleit(arr,n-1);
    return 0;
}