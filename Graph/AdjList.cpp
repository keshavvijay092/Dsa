#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Graph {
public:
    map<int, list<int>> adjList;

    // Function to add edges to the graph
    void addEdges(int u, int v, int direction) {
        adjList[u].push_back(v);

        // If it's an undirected graph, add the edge in both directions
        if (direction == 0) {
            adjList[v].push_back(u);
        }
    }

    // Function to print the adjacency list
    void printAdjList() {
        for (auto i : adjList) {
            cout << i.first << " :-> {";
            for (auto em : i.second) {
                cout << em << " , ";
            }
            cout << " }" << endl;  // Corrected the formatting here
        }
    }
};

int main() {
    Graph g;
    
    // Adding edges to the graph
    g.addEdges(1, 2, 1);  // Directed edge from 1 to 2
    g.addEdges(2,0, 0);  // Undirected edge between 2 and 1
    g.addEdges(3, 1, 1);  // Directed edge from 3 to 1
    g.addEdges(3, 2, 1);  // Directed edge from 3 to 2

    // Print the adjacency list
    g.printAdjList();

    return 0;
}