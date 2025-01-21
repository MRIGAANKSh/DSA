// Undirected Graph Cycle
// Difficulty: MediumAccuracy: 30.13%Submissions: 506K+Points: 4
// Given an undirected graph with V vertices labelled from 0 to V-1 and E edges, check whether the graph contains any cycle or not. The Graph is represented as an adjacency list, where adj[i] contains all the vertices that are directly connected to vertex i.

// NOTE: The adjacency list represents undirected edges, meaning that if there is an edge between vertex i and vertex j, both j will be adj[i] and i will be in adj[j].

// Examples:

// Input: adj = [[1], [0,2,4], [1,3], [2,4], [1,3]] 
// Output: 1

#include <vector>
#include <queue>
using namespace std;

class Solution {
  public:
    // Function to detect a cycle in an undirected graph.
    bool isCycle(vector<vector<int>>& adj) {
        int V = adj.size(); // Number of vertices
        vector<bool> visited(V, false); // To track visited nodes.

        // Check all components (handles disconnected graphs).
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (bfsCycleCheck(adj, visited, i)) {
                    return true; // Cycle found.
                }
            }
        }
        return false; // No cycle found.
    }

  private:
    bool bfsCycleCheck(vector<vector<int>>& adj, vector<bool>& visited, int start) {
        queue<pair<int, int>> q; // Pair: (node, parent)
        q.push({start, -1}); // Start BFS with the source node.

        while (!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            visited[node] = true;

            // Traverse all adjacent nodes.
            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    // Push unvisited neighbor.
                    q.push({neighbor, node});
                } else if (neighbor != parent) {
                    // If visited and not parent, a cycle is detected.
                    return true;
                }
            }
        }
        return false; // No cycle found in this component.
    }
};
