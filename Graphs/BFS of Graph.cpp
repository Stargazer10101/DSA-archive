// Question link:
// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/0


class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        // Code here
        int v= adj.size();
        queue <int> q;
        vector <bool> visited(v, false);
        visited[0]=true;
        q.push(0);
        vector<int> bfsResult;
        
        while(!q.empty()){
            int node= q.front();
            q.pop();
            bfsResult.push_back(node);
            
            for(int neighbor: adj[node]){
                if(!visited[neighbor]){
                    visited[neighbor]= true;
                    q.push(neighbor);
                }
                
            }
        }
        return bfsResult;
        

    }
};