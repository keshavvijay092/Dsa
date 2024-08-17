#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Heap{
    public:
    int *arr;
    int capacity;
    int size;
    Heap(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        this->size = 0;
    }
    void insert(int val)
    {
       size++;
       int c = size;
       arr[c] = val;
       while(c>1)
       {
        int p = c/2;
        if(arr[p]< arr[c])
        {
            swap(arr[p],arr[c]);
            c = p;
        }
        else
        {
            break;
        }
       }
    }

    int deleted()
    {
        int ans = arr[1];
        arr[1] = arr[size];
        size--;
       int i = 1;
        while(i<size)
        {
            int La = i;
            int L = 2*i;
            int R = 2*i+1;

            if(L<=size && arr[La]<arr[L] )
            {
                La = L;
            }
             if(R<=size && arr[La]<arr[R] )
            {
                La = R;
            }

            if(i == La) break;
            else
            {
                swap(arr[i],arr[La]);
                i = La;
            }
            }
            cout<<endl<<"current top element is "<<arr[1]<<" "<<endl;
            return ans;
    }
    void Print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Heap h(10);
    h.insert(10);
    h.insert(20);
    h.insert(30);
    h.insert(7);
    h.insert(5);
    h.Print();
    int ans = h.deleted();
    cout<<endl<<"The top Element is"<<ans<<" ";
    return 0;
}




































// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// class Heap{
//     public:
//     int *arr;
//     int capacity;
//     int size;

//     Heap(int capacity)
//     {
//         this->arr = new int[capacity];
//         this->capacity = capacity;
//         this->size = 0;
//     }
//     void insert(int val)
//     {
//         if(size == capacity)
//         {
//             cout<<"Heap OverFlow";
//             return ;
//         }
//         // size increase kar jaega 
//         size++;
//         int index = size;
//         arr[index]= val;


//         // while taking the value at exact position 
//         while(index>1)
//         {
//             int parentIndex = index/2;
//             if(arr[index] > arr[parentIndex])
//             {
//                 swap(arr[index],arr[parentIndex]);
//                 index = parentIndex;
//             }
//             else
//             {
//                 break;
//             }
//         }

//     }
// void PrintHeap()
// {
//     for(int i=1;i<=size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// };
// int main()
// {
//     Heap h(20);
//     h.insert(10);
//     h.insert(20);
//     h.insert(5);
//     h.insert(11);
//     h.insert(6);

//     cout<<"Printing Heap "<<endl;
//     h.PrintHeap();

//     return 0;
// }