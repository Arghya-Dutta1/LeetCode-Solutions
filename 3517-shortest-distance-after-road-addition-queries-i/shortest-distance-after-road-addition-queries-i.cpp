class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<vector<pair<int, int>>> graph(n);
        for (int i = 0; i < n - 1; ++i)
            graph[i].push_back({i + 1, 1}); 

        vector<int> result;
        
        for (const auto& query : queries) {
            int u = query[0];
            int v = query[1];
            graph[u].push_back({v, 1}); 
            result.push_back(dijkstra(graph, n));
        }
        
        return result;
    }

    int dijkstra(const vector<vector<pair<int, int>>>& graph, int n) {
        vector<int> dist(n, INT_MAX);
        dist[0] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0});
        
        while (!pq.empty()) {
            int d = pq.top().first;
            int u = pq.top().second;
            pq.pop();
            
            if (d > dist[u]) continue;
            
            for (const auto& [v, w] : graph[u]) {
                if (dist[u] + w < dist[v]) {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }
        
        return dist[n - 1];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();