class Solution {
public:
    void dfs(vector<vector<int>>& graph, int u, vector<bool>& used){
        for(auto v:graph[u])
            if(!used[v]){
                used[v]=true;
                dfs(graph, v, used);
            }
    }

    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<bool> ans;
        vector<vector<int>> graph(numCourses);
        vector<vector<bool>> isReachable(numCourses, vector<bool>(numCourses));

        for(auto p:prerequisites)
            graph[p[0]].push_back(p[1]);

        for(int i=0;i<numCourses;i++)
            dfs(graph, i, isReachable[i]);
        
        for(auto q:queries)
            ans.push_back(isReachable[q[0]][q[1]]);
        
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();