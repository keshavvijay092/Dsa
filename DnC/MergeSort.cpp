#include<bits/stdc++.h>
#include<iostream>
using namespace std;


void merge(int arr[],int s,int e,int mid)
{
   int leftLen  = mid-s+1;
   int rightLen = e - mid;

   int *Left =  new int(leftLen);
   int *right = new int(rightLen);

   int mainIndex = s;

   for(int i=0;i<leftLen;i++)
   {
    Left[i] = arr[mainIndex];
    mainIndex++;
   }
// mainIndex = mid+1;
    for(int i=0;i<rightLen;i++)
   {
    right[i] = arr[mainIndex];
   mainIndex++;
   }

   int l = 0;           
   int r = 0;
   int m = s;

   while(l<leftLen && r < rightLen)
   {
    if(Left[l] > right[r])
    {
        arr[m] = right[r];
        r++;
    }
    else
    {
        arr[m] = Left[l];
        l++;
    }
    m++;
   }


//    left remaining element 

while(l<leftLen)
{
    arr[m] = Left[l];
    l++;
    m++;
}

while(r<rightLen)
{
    arr[m] = right[r];
    r++;
    m++;
}
 delete []Left;
 delete []right;
}

void mergeSort(int arr[],int s,int e)
{
    // base case 
    if(s>=e)
    {
        return ;
    }
    int mid = (s + e)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e,mid);
}

int main()
{
    int arr[] = {2,1,6,9,4,5};
    int size = 6;
    int s = 0;
    int e = size-1;

    cout<<"before merge sort"<<endl;
  for(int i=0; i<size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

    cout<<endl;

    mergeSort(arr,s,e);
cout<<"after merge sort"<<endl;
   for(int i=0; i<size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
    cout<<endl;

    return 0;
}