class Solution {
public:
    void dfs(vector<vector<int>>& g, vector<int>& v, int vertex){
	    v[vertex]=1;
	    for(auto i:g[vertex])
		    if(v[i]==0)
			    dfs(g, v, i);	
    }

    int findCircleNum(vector<vector<int>>& ic) {
        int n=ic.size();
        vector<vector<int>> g(n);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(ic[i][j]==1){
                    g[i].push_back(j);
                }

        int ans=0;
	    vector<int> vis(n, 0);
	    for(int i=0;i<n;i++)
		    if(vis[i]==0){
			    dfs(g, vis, i);
			    ans++;
	    	}
	    return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();