// Max no in an array 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int MaxNo(int arr[][4],int row,int col)
{
    int maxi = INT_MIN;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            maxi = max(maxi,arr[i][j]);
        }
    }
    return maxi;
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
    int ans = MaxNo(arr,row,col);
    cout<<"the max No. of this matrix is "<<ans;
    return 0;
}