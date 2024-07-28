#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void quickSort(int arr[],int s,int e)
{
    if(s>=e) return ;
    int pivot = e;
    int i = s-1;
    int j = s;

    while(j<pivot)
    {
        if(arr[j]<arr[pivot])
        {
            i++;
            swap(arr[i],arr[j]);

        }
        j++;
    }
    i++;

    swap(arr[i],arr[pivot]);
    quickSort(arr,s,i-1);
    quickSort(arr,i+1,e);
}


int main()
{
    int arr[6] = {3,2,6,8,1,0};
    int s = 0;
    int e = 5;

     cout<<"before quick sort"<<endl;
  for(int i=0; i<6; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

    cout<<endl;

    quickSort(arr,s,e);
cout<<"after merge sort"<<endl;
   for(int i=0; i<6; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
    cout<<endl;
    return 0;
}