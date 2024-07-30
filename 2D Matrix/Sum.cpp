#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// Function to print the sum of each row
void rowWise(int arr[][4], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        int sum = 0;
        for(int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << ": " << sum << endl;
    }
}

// Function to print the sum of each column
void colWise(int arr[][4], int row, int col)
{
    for(int i = 0; i < col; i++)
    {
        int sum = 0;
        for(int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        cout << "Sum of column " << i + 1 << ": " << sum << endl;
    }
}

void Diagonal(int arr[][4],int row,int col)
{
    int sum=0;
    for(int i=0;i<row;i++)
    {
       sum +=arr[i][i]; 
    }
    cout<<sum<<endl;
}

// Function to print the array
void print(int arr[][4], int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][4] = {{3, 5, 14, 55}, {43, 12, 67, 2}, {7, 89, 76, 23}};
    int row = 3;
    int col = 4;

    // Print the array
    cout << "Array:" << endl;
    print(arr, row, col);
    cout << endl;

    // Print row-wise sums
    cout << "Row-wise sums:" << endl;
    rowWise(arr, row, col);
    cout << endl;

    // Print column-wise sums
    cout << "Column-wise sums:" << endl;
    colWise(arr, row, col);

     // Print Diagonal-wise sums
    cout << "Diagonal-wise sums:" << endl;
    colWise(arr, row, col);
    return 0;
}
