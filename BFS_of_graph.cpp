class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        // Code here
        int v = adj.size();
        queue<int> q;
        int vis[v] = {0};
        q.push(0);
        vis[0] = 1;
        vector<int> bfs;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it: adj[node]) {
                if(!vis[it])  {
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }
        return bfs;
    }
};
