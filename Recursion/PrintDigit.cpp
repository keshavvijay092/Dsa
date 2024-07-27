#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void SingleDigit(int n)
{
    if(n<10) 
    {
        cout<<n%10<<" ";
        return ;
    }
    int val =n%10;

    SingleDigit(n/10);
    cout<<val<<" ";
    return ;
}
int main()
{
    int n = 21975;
    SingleDigit(n);
    return 0;
}