// Question Link:
// https://www.geeksforgeeks.org/problems/print-adjacency-list-1587115620/0


class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // Code here
       vector<vector<int>>arr(V);
       for(int i=0; i< edges.size(); i++){
           
           if(find(arr[edges[i].first].begin(), arr[edges[i].first].end(), edges[i].second) == arr[edges[i].first].end()){
               arr[edges[i].first].push_back(edges[i].second);
           }
           
          if(find(arr[edges[i].second].begin(), arr[edges[i].second].end(), edges[i].first) == arr[edges[i].second].end()){
              arr[edges[i].second].push_back(edges[i].first);
          }
           
           
       }
       
       return arr;
       
        
    }
};