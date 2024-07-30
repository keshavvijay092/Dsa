#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void input(int arr[][3],int row,int col)
{
       for(int i=0;i<row;i++)
       {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter the index for row "<< i <<"  col index "<< j<<endl; 
            cin>>arr[i][j];
        }
       }
}
void print(int arr[][3],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           cout<<arr[i][j] <<" ";
        }
        cout<<endl;
    }
}
int main()
{
     int arr[3][3] ;
     input(arr,3,3);
     print(arr,3,3);
    return 0;
}