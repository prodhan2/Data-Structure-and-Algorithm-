#include<iostream>
using namespace std;
int main() {
    int vertex;
    cout << "Enter number of vertices: ";
    cin >> vertex;

    int edges;
    cout << "Enter number of edges: ";
    cin >> edges;

    int adjacencyMatrix[vertex][vertex];
    for(int i = 0; i < vertex; i++) {
        for(int j = 0; j < vertex; j++) {
            adjacencyMatrix[i][j] = 0;
        }
    }

    // Enter edges for Undirected Graph
    cout << "Enter edges (u v): \n";
    for(int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;

        if (u < 0 || u >= vertex || v < 0 ||  v >= vertex || u == v) {
            cout << "Invalid edge! Please re-enter.\n";
            i--;
        }
        else {
            adjacencyMatrix[u][v] = 1;
            adjacencyMatrix[v][u] = 1;  // skip this line for directed graph
        }
    }
    
    

    // Printing adjacency matrix...
    cout << "Adjacency matrix:\n";
    for(int i = 0; i < vertex; i++) {
        for(int j = 0; j < vertex; j++) {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}


Input:
Enter number of vertices: 5
Enter number of edges: 6
Enter edges (u v):
1 2
1 3
2 3
2 4
3 5
4 5

  
Output:
Adjacency matrix:
0 1 1 0 0
1 0 1 1 0
1 1 0 0 1
0 1 0 0 1
0 0 1 1 0
