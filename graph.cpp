// <vector> - Adjacency List representation
#include <vector>
using namespace std;

// Graph class using adjacency list representation
class Graph {
  int V;                 // Number of vertices
  
  // Vector of vectors to represent the adjacency list
  vector<vector<int>> adj;
  
public:
  // Constructor
  Graph(int vertices) {
    V = vertices;
    adj.resize(V);
  }
  
  // Add an edge to the graph
  void addEdge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  
  // Print the adjacency list representation of the graph
  void printGraph() {
    for (int v = 0; v < V; ++v) {
      cout << "Adjacency list of vertex " << v << ": ";
      for (const auto& vertex : adj[v]) {
        cout << vertex << " ";
      }
      cout << endl;
    }
  }
};

int main() {
  // Create a graph with 5 vertices
  Graph g(5);
  
  // Add edges
  g.addEdge(0, 1);
  g.addEdge(0, 4);
  g.addEdge(1, 2);
  g.addEdge(1, 3);
  g.addEdge(1, 4);
  g.addEdge(2, 3);
  g.addEdge(3, 4);
  
  // Print the adjacency list representation of the graph
  g.printGraph();
  
  return 0;
}


// <array> - Adjacency Matrix representation
#include <array>
using namespace std;

// Graph class using adjacency matrix representation
class Graph {
  int V;                       // Number of vertices
  
  // 2D array to represent the adjacency matrix
  array<array<int, 100>, 100> adj;
  
public:
  // Constructor
  Graph(int vertices) {
    V = vertices;
    adj.fill({});
  }
  
  // Add an edge to the graph
  void addEdge(int u, int v) {
    adj[u][v] = 1;
    adj[v][u] = 1;
  }
  
  // Print the adjacency matrix representation of the graph
  void printGraph() {
    for (int i = 0; i < V; ++i) {
      for (int j = 0; j < V; ++j) {
        cout << adj[i][j] << " ";
      }
      cout << endl;
    }
  }
};

int main() {
  // Create a graph with 5 vertices
  Graph g(5);
  
  // Add edges
  g.addEdge(0, 1);
  g.addEdge(0, 4);
  g.addEdge(1, 2);
  g.addEdge(1, 3);
  g.addEdge(1, 4);
  g.addEdge(2, 3);
  g.addEdge(3, 4);
  
  // Print the adjacency matrix representation of the graph
  g.printGraph();
  
  return 0;
}


// <unordered_map> - Adjacency List representation with weights
#include <unordered_map>
using namespace std;

// Graph class using adjacency list representation with weights
class Graph {
  int V;                               // Number of vertices
  
  // Map to represent the adjacency list with weights
  unordered_map<int, unordered_map<int, int>> adj;
  
public:
  // Constructor
  Graph(int vertices) {
    V = vertices;
  }
  
  // Add an edge to the graph with weight
  void addEdge(int u, int v, int weight) {
    adj[u][v] = weight;
    adj[v][u] = weight;
  }
  
  // Print the adjacency list representation of the graph with weights
  void printGraph() {
    for (const auto& vertex : adj) {
      cout << "Adjacency list of vertex " << vertex.first << ": ";
      for (const auto& edge : vertex.second) {
        cout << edge.first << "(" << edge.second << ") ";
      }
      cout << endl;
    }
  }
};

int main() {
  // Create a graph with 5 vertices
  Graph g(5);
  
  // Add edges with weights
  g.addEdge(0, 1, 10);
  g.addEdge(0, 4, 20);
  g.addEdge(1, 2, 30);
  g.addEdge(1, 3, 40);
  g.addEdge(1, 4, 50);
  g.addEdge(2, 3, 60);
  g.addEdge(3, 4, 70);
  
  // Print the adjacency list representation of the graph with weights
  g.printGraph();
  
  return 0;
}
