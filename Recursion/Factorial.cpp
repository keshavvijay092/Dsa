#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int fact(int n)
{
    if( n == 0 || n == 1) return 1;
    return n * fact(n-1);

}
int main()
{
    int n = 5;
    int ans = fact(n);
    cout<<"this ans is "<<ans;

    return 0;
}