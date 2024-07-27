#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void ans(int n,int &val)
{
    if(  n == 0) return ;
    
    val+= n ;
    ans(n-1,val);
    return ;
}
int main()
{
    int n = 4;
    int sum=0 ;
    ans(n,sum);
    cout<<sum;
    return 0;
}