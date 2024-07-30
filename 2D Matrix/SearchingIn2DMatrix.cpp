#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool search(int arr[3][3],int row,int col,int target)
{
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j] == target)
            {
                return true;
                break;
            }
        }
    }
    return false;
}
int main()
{
    int arr[3][3] = {{12,15,17},{1,7,4},{9,10,5}};
    bool ans = search(arr,3,3,4);
    cout<<" 4 ka liya  "<<ans<<endl;
    ans = search(arr,3,3,18);
    cout<<"18 ka liya  "<<ans<<endl;
    return 0;
}