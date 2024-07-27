#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool Found(int arr[],int n,int target)
{
    if( n < 0) return false;

    if(arr[n] == target) return true;
    else Found(arr,n-1,target);
    
   

}
int main()
{
    int arr[] = {1,4,7,3,2,9};
    int n = 6;
    int target = 5;
    if(Found(arr,n-1,target))
    {
        cout<<"Mil gya whooo";
    }
    else 
    {
        cout<<"nhi mila"<<endl;
    }
    return 0;
}