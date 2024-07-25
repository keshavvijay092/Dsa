// USING Recursion 

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void solve(stack<int>&st,int &pos,int &ans)
{
    if(pos == 1)
    {
        ans = st.top();
        return ;
    }
    pos--;
    int temp = st.top();
    st.pop();
    
    solve(st,pos,ans);
    // backtracking 
    st.push(temp);
}

int getMiddle(stack<int>&st)
{
    int size = st.size();
     if(st.empty()){
    cout << "Stack is empty, no middle element" << endl;
    return -1;
  }
  else
  {

    int pos=0 ;
    if(size&1)
    {
        // odd size means 
        pos = (size+1)/2; 
    }
    else
    {
        pos = size/2;
    }
    int ans = -1;
    solve(st,pos,ans);
    return ans;
  }
}
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    
     int middle = getMiddle(st);
     cout<<"the middle element is"<<middle;
   


    return 0;
}

// brute force -> using loop 
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int main()
// {
//     stack<int>odd;
//     stack<int>even;
    
//     int o = 5;
//     int e = 6;

//     int a = 1;
//     for(int i=0;i<o;i++)
//     {
//         odd.push(a);
//         a = a*2;
//     }


//      int b = 2;
//     for(int i=0;i<e;i++)
//     {
//         even.push(b);
//         b = b*3;
//     }
   
// //    find the middle element 




//   int middleOdd = (o + 1) / 2;
//     for (int i = 1; i < middleOdd; i++)
//     {
//         odd.pop();
//     }

//     // Find the middle element of even stack
//     int middleEven = e / 2;
//     for (int i = 1; i <= middleEven; i++)
//     {
//         even.pop();
//     }

// cout<<"ODD ka middle element"<<odd.top()<<endl;
// cout<<"Even ka middle element"<<even.top()<<endl;

//     return 0;
// }