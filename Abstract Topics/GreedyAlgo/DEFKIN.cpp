#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int row = 8;
    int col = 15;
    int tour = 3;

    vector<pair<int,int>> loc;
    loc.push_back({3,8});
    loc.push_back({11,2});
    loc.push_back({8,6});

    vector<int> xDim;
    xDim.push_back(0);
    xDim.push_back(col+1);
    for(int i=0;i<loc.size();i++)
    {
        xDim.push_back(loc[i].first);
    }
    sort(xDim.begin(),xDim.end());


    vector<int>yDim;
    yDim.push_back(0);
    yDim.push_back(row+1);
    for(int i=0;i<loc.size();i++)
    {
        yDim.push_back(loc[i].second);
    }
    sort(yDim.begin(),yDim.end());

        // needs the differnce 

    vector<int>XAns;
    for(int i=1;i<xDim.size();i++)
    {
        int diff = xDim[i] - xDim[i-1] -1;
        XAns.push_back(diff);
    }

    vector<int>YAns;
    for(int i=1;i<yDim.size();i++)
    {
        int diff = yDim[i] - yDim[i-1] -1;
        YAns.push_back(diff);
    }


   int maxi = -1;

   for(int i=0;i<XAns.size();i++)
   {
    for(int j = 0;j<YAns.size();j++)
    {
         int prod = XAns[i]* YAns[i];
         maxi = max(maxi,prod);
    }
   }

   cout<<"Final ans:"<<maxi<<endl;


    return 0;
}