class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> ans, state(graph.size(), 0);
        for(int i=0;i<graph.size();i++)
            if(!cycle(graph, i, state))
                ans.push_back(i);
        return ans;
    }

    bool cycle(vector<vector<int>>& g, int u, vector<int>& s){
        if(s[u]==-1) return true;
        if(s[u]==1) return false;

        s[u]=-1;
        for(auto v:g[u])
            if(cycle(g, v, s))
                return true;
        s[u]=1;
        return false;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();