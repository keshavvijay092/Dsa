#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void ColWise(int arr[][3],int row,int col)
{
    for(int  j=0;j<col;j++)
    {
        for(int i=0;i<row;i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return ;
}
int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    ColWise(arr,3,3);
    return 0;
}