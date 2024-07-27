#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void PrintCounting(int n)
{
    if( n <=0) return ;
    cout<<n << " ";
    PrintCounting(n-1);
    return ;
}
int main()
{
    int n = 10;
    PrintCounting(n);
    return 0;
}