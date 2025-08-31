class Solution {
public:
    vector<int> minimumTime(int n, vector<vector<int>>& edges, vector<int>& disappear) {
        vector<int> answer(n, -1);
    unordered_map<int, vector<pair<int, int>>> graph;
    
    for (auto edge : edges) {
        int u = edge[0], v = edge[1], len = edge[2];
        graph[u].push_back({v, len});
        graph[v].push_back({u, len});
    }
    
    vector<bool> visited(n, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});

    while (!pq.empty()) {
        auto [time, node] = pq.top();
        pq.pop();

        if (visited[node]) continue;
        visited[node] = true;
        answer[node] = time;
        
        for (auto [next, len] : graph[node]) {
            int nextTime = time + len;
            if (nextTime < disappear[next]) {
                pq.push({nextTime, next});
            }
        }
    }
    
    return answer;
    }
};