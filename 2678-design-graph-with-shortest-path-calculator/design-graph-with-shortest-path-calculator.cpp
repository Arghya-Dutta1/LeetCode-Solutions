typedef pair<int, int> pii;

class Graph {
public:
    int number_of_nodes;
    vector<vector<pair<int, int>>> adjacencyList;
    vector<vector<int>> shortestDist;

    Graph(int n, vector<vector<int>>& edges) {
        adjacencyList.resize(n);
        for (auto edge : edges) {
            adjacencyList[edge[0]].push_back({edge[1], edge[2]});
        }

        number_of_nodes = n;
        shortestDist = FW(n, edges);

    }
    
    void addEdge(vector<int> edge) {
        int a = edge[0], b = edge[1], w = edge[2];

        for (int i = 0; i < number_of_nodes; i++)
            for (int j = 0; j < number_of_nodes; j++)
                if (shortestDist[i][a] != INT_MAX && shortestDist[b][j] != INT_MAX && shortestDist[i][a] + w + shortestDist[b][j] < shortestDist[i][j])
                    shortestDist[i][j] = shortestDist[i][a] + w + shortestDist[b][j];

    }
    
    int shortestPath(int node1, int node2) {
         if (shortestDist[node1][node2] == INT_MAX) return -1;
        return shortestDist[node1][node2];
    }

    vector<vector<int>> FW(int n, vector<vector<int>>& edges) {
        vector<vector<int>> minDist(n, vector<int>(n, INT_MAX));

        for (int i = 0; i < n; i++)
            minDist[i][i] = 0;

        for (auto edge : edges)
            minDist[edge[0]][edge[1]] = edge[2];

        for (int k = 0; k < n; ++k)
            for (int i = 0; i < n; ++i)
                for (int j = 0; j < n; ++j)
                    if (minDist[i][k] != INT_MAX && minDist[k][j] != INT_MAX)
                        minDist[i][j] =
                            min(minDist[i][j], minDist[i][k] + minDist[k][j]);

        return minDist;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */