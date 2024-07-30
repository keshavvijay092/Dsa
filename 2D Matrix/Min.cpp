// Max no in an array 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int MinNo(int arr[][4],int row,int col)
{
    int mini = INT_MAX;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            mini = min(mini,arr[i][j]);
        }
    }
    return mini;
}
void print(int arr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[3][4] = {{3,5,14,55},{43,12,67,2},{7,89,76,23}};
    int row = 3;
    int col = 4;
   
    print(arr,row,col);
    int ans = MinNo(arr,row,col);
    cout<<"the min No. of this matrix is "<<ans;
    return 0;
}