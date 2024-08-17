#include<bits/stdc++.h>
#include<iostream>
using namespace std;

template <typename t>
class Graph{
public:
unordered_map<t,list<pair<t,int>>>adjList;

void addEdges(t u, t v, int wt ,int direction)
{
    adjList[u].push_back({v,wt});
    if(direction == 0)
    adjList[v].push_back({u,wt});
    return ;
}
void PrintEdges()
{
    for(auto i:adjList)
    {
        cout<<i.first<<" :{ ";
        for(auto em:i.second)
        {
            cout<<" { " <<em.first <<" : "<<em.second<<" }, ";
        }
        cout<<" }"<<endl;
    }
}
void BFS(t src,unordered_map<t,bool>vis)
{
      queue<t>qt;
      qt.push(src);
      vis[src] = true;
      while(!qt.empty())
      {
        auto element = qt.front();
        qt.pop();
        cout<<element<<" ";
        for(auto i:adjList[element])
        {
           t ele = i.first;
           if(!vis[ele])
           {
            qt.push(ele);
            vis[ele] = true;
           }
        }
      }   
}

void DFS(t src,unordered_map<t,bool>&vis)
{
    vis[src] = true;
    cout<<src<<" ";

    for(auto i:adjList[src])
    {
      t ele = i.first;
      if(!vis[ele])
      {
        DFS(ele,vis);
      }
    }
    
}
};
int main()
{
    Graph<int> g;
    g.addEdges(1,2,5,0);
     g.addEdges(2,3,10,1);
      g.addEdges(4,2,20,0);
       g.addEdges(1,3,50,1);
      cout<<"Printing the addList with weight"<<" "<<endl;
       g.PrintEdges();
       unordered_map<int,bool>vis;
     cout<<endl<<" bfs traversal"<<" ";
     g.BFS(1,vis);
     cout<<endl<<"dfs traversal"<<" ";
     g.DFS(1,vis);

    return 0;
}