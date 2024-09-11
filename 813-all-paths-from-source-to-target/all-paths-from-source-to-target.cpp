class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    void dfs(int vertex, vector<vector<int>>& graph){
        path.push_back(vertex);
        for(auto child:graph[vertex]) dfs(child, graph);
        if(vertex==graph.size()-1) ans.push_back(path);
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(0, graph);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();