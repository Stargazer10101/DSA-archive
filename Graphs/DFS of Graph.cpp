// Question Link:
// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/0


class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node, vector<vector<int>> &adj, vector<bool> &visited, vector<int> &dfsResult) {
        // Mark the node as visited and add it to the result
        visited[node] = true;
        dfsResult.push_back(node);

        // Traverse all neighbors of 'node' in order
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor, adj, visited, dfsResult);
            }
        }
    }
    
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        int v = adj.size();  // Number of vertices in the graph
        vector<bool> visited(v, false);  // To track visited nodes
        vector<int> dfsResult;  // To store the DFS traversal result

        // Start DFS from node 0
        dfs(0, adj, visited, dfsResult);

        return dfsResult;  // Return the DFS traversal result
    }
};