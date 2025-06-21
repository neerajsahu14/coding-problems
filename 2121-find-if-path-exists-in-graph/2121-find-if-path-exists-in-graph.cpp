class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, list<int>> adj;
        for(int i=0; i<edges.size(); i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        unordered_set<int> visited(adj.size());
        return dfs(source,destination,adj,visited);
    }
private :
    bool dfs(
        int node, int dest,unordered_map<int, list<int>> &adj , unordered_set<int>& visited
    ){
        if(node == dest) return true;
    
        visited.insert(node);
        for(int i : adj[node]){
            if(visited.find(i) == visited.end()){
                if(dfs(i,dest,adj,visited))
                    return true;
            }
        }
        return false;
    }
};