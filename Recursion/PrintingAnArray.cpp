#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void Print(int a[],int n)
{
    if(n == 0) return ;

    cout<<*a<<" ";
    Print(a+1,n-1);
    return ;
}
int main()
{
    int arr[] = {1,2,3,5,9};
    int n = 5;
    Print(arr,n);
    return 0;
}