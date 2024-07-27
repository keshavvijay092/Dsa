#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void PrintEven(int arr[],int n)
{
  if( n < 0 ) return ;


  PrintEven(arr,n-1);
  if(!(arr[n]&1)) cout<<arr[n]<<" ";
  return ;

}
int main()
{
    int arr[] = {1,2,4,5,6,8,22,11};
    int n = 8;

    PrintEven(arr,n-1);
    return 0;
}