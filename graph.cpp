// <vector> - Adjacency List representation
#include <iostream>
#include <vector>
#include <queue>
#include <climits>
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
  
  // Utility function for DFS
  void DFSUtil(int v, vector<bool>& visited) {
    visited[v] = true;
    cout << v << " ";
    
    for (int neighbor : adj[v]) {
      if (!visited[neighbor]) {
        DFSUtil(neighbor, visited);
      }
    }
  }

  // Depth-First Search (DFS)
  void DFS(int start) {
    vector<bool> visited(V, false);  // Mark all vertices as not visited
    DFSUtil(start, visited);
  }
  
  
  // Breadth-First Search (BFS)
  void BFS(int start) {
    vector<bool> visited(V, false);  // Mark all vertices as not visited
    queue<int> q;                    // Create a queue for BFS
    visited[start] = true;           // Mark the current node as visited
    q.push(start);                   // Enqueue the current node
    
    while (!q.empty()) {
      int v = q.front();             // Dequeue a vertex from the queue
      cout << v << " ";
      q.pop();
      
      // Get all adjacent vertices of the dequeued vertex
      // If a adjacent has not been visited, mark it visited and enqueue it
      for (int neighbor : adj[v]) {
        if (!visited[neighbor]) {
          visited[neighbor] = true;
          q.push(neighbor);
        }
      }
    }
  }
  // Dijkstra's algorithm
  vector<int> dijkstra(int start) {
    vector<int> dist(V, INT_MAX);         // Initialize distances as infinity
    dist[start] = 0;                      // Distance of start vertex is 0
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});                   // Enqueue the start vertex
    
    while (!pq.empty()) {
      int u = pq.top().second;             // Get the vertex with the minimum distance
      pq.pop();
      
      for (const auto& neighbor : adj[u]) {
        int v = neighbor.first;
        int weight = neighbor.second;
        
        // If there is a shorter path to v through u
        if (dist[u] + weight < dist[v]) {
          dist[v] = dist[u] + weight;
          pq.push({dist[v], v});
        }
      }
    }
    
    return dist;
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
  
  cout << "DFS traversal starting from vertex 0: ";
  g.DFS(0);
  cout << endl;
  
  cout << "BFS traversal starting from vertex 0: ";
  g.BFS(0);
  cout << endl;
  
  return 0;
}


// <unordered_map> - Adjacency List representation with weights
#include <iostream>
#include <unordered_map>
#include <queue>
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
  
  // Depth-First Search (DFS)
  void DFS(int start) {
    vector<bool> visited(V, false);  // Mark all vertices as not visited
    DFSUtil(start, visited);
  }
  
  // Utility function for DFS
  void DFSUtil(int v, vector<bool>& visited) {
    visited[v] = true;
    cout << v << " ";
    
    for (const auto& neighbor : adj[v]) {
      if (!visited[neighbor.first]) {
        DFSUtil(neighbor.first, visited);
      }
    }
  }
  
  // Breadth-First Search (BFS)
  void BFS(int start) {
    vector<bool> visited(V, false);  // Mark all vertices as not visited
    queue<int> q;                    // Create a queue for BFS
    visited[start] = true;           // Mark the current node as visited
    q.push(start);                   // Enqueue the current node
    
    while (!q.empty()) {
      int v = q.front();             // Dequeue a vertex from the queue
      cout << v << " ";
      q.pop();
      
      // Get all adjacent vertices of the dequeued vertex
      // If a adjacent has not been visited, mark it visited and enqueue it
      for (const auto& neighbor : adj[v]) {
        if (!visited[neighbor.first]) {
          visited[neighbor.first] = true;
          q.push(neighbor.first);
        }
      }
    }
  }
  // Dijkstra's algorithm
  vector<int> dijkstra(int start) {
    vector<int> dist(V, INT_MAX);         // Initialize distances as infinity
    dist[start] = 0;                      // Distance of start vertex is 0
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});                   // Enqueue the start vertex
    
    while (!pq.empty()) {
      int u = pq.top().second;             // Get the vertex with the minimum distance
      pq.pop();
      
      for (const auto& neighbor : adj[u]) {
        int v = neighbor.first;
        int weight = neighbor.second;
        
        // If there is a shorter path to v through u
        if (dist[u] + weight < dist[v]) {
          dist[v] = dist[u] + weight;
          pq.push({dist[v], v});
        }
      }
    }
    
    return dist;
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
  
  cout << "DFS traversal starting from vertex 0: ";
  g.DFS(0);
  cout << endl;
  
  cout << "BFS traversal starting from vertex 0: ";
  g.BFS(0);
  cout << endl;
  
  return 0;
}
