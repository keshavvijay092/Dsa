#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int fib(int n)
{
    if( n == 0) return 0;
    if( n == 1) return 1;
   
   int ans =  fib(n-2)+fib(n-1);
   cout<<ans<<" ";
   return ans;
    
}
int main()
{
    int n = 4;
    int ans = fib(n);
    // cout<<"the 4 answer is"<<ans;
    return 0;
}