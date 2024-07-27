// 2 ki power n 

#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int solve(int n)
{
    if( n == 0) return 1;
    return 2 * solve(n-1);

}
int main()
{
    int n = 6;
    int ans = solve(n);
    cout<<" 2 ki power n hoti hai :" <<ans;
    return 0;
}