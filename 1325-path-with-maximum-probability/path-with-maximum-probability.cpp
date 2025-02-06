class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int, double>>> graph(n);
        priority_queue<pair<double, int>> maxHeap;
        maxHeap.emplace(1.0, start);
        vector<bool> seen(n);

        for (int i = 0; i < edges.size(); ++i) {
            graph[edges[i][0]].emplace_back(edges[i][1], succProb[i]);
            graph[edges[i][1]].emplace_back(edges[i][0], succProb[i]);
        }

        while (!maxHeap.empty()) {
            auto [prob, u] = maxHeap.top();
            maxHeap.pop();
            if (u == end)
                return prob;
            if (seen[u])
                continue;
            seen[u] = true;
            for (auto& [nextNode, edgeProb] : graph[u]) {
                if (seen[nextNode])
                    continue;
                maxHeap.emplace(prob * edgeProb, nextNode);
            }
        }
        return 0;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();