class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int n = adj.size();
        vector<bool> vis(n+1,false);
        vector<int> ans;
        queue<int> q;
        q.push(0);
        
        while(!q.empty()){
            int node = q.front();
            vis[node] = true;
            ans.push_back(node);
            q.pop();
            for(auto i : adj[node]){
                if(!vis[i]){
                    vis[i]=true;
                    q.push(i);
                }
            }
        }
        return ans;
    }
};