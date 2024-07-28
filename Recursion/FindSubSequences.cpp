#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void Solve(string str,string output,int i)
{
    if(i >= str.size()) 
    {
        cout<<" -> "<<output;
        return ;
    }
    char ch = str[i];

    Solve(str,output+ch,i+1);
    Solve(str,output,i+1);
    return ;
}
int main()
{
    string str = "abc";
    string output = "";
    int i=0;
    Solve(str,output,i);  
    return 0;
}