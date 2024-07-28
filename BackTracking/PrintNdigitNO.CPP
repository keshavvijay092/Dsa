// Printing a N digit no from 1 and 2 in increasing order 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(auto i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return ;
}
void PrintAll(int arr[],int i,int n)
{
    // step1 : base case 
    if(i == n)
    {

        print(arr,n);
        return ;
    }
    // step 2: choices to makes 
    // arr[i] = 1;
    // PrintAll(arr,i+1,n);
    // arr[i] = 2;
    // PrintAll(arr,i+1,n);
    // arr[i] = 3;
    // PrintAll(arr,i+1,n);

    for(int ch=1;ch<=4;ch++)
    {
        arr[i] = ch;
        PrintAll(arr,i+1,n);
    }
    return ;

}
int main()
{
    int arr[3] ;
    PrintAll(arr,0,3);
    return 0;
}