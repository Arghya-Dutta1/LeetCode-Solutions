class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> in(n);
        vector<vector<int>> g(n);

        for(auto& i:prerequisites){
            g[i[1]].push_back(i[0]);
            in[i[0]]++;
        }

        queue<int> q;
        for(int i=0;i<n;i++)
            if(in[i]==0)
                q.push(i);
        
        int c=0;
        while(!q.empty()){
            int u=q.front();
            q.pop();
            c++;

            for(auto v:g[u])
                if(--in[v]==0)
                    q.push(v);
        }

        return c==n;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();