class Solution {
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n=colors.length(), p=0, ans=0;
        vector<vector<int>> g(n), c(n, vector<int>(26));
        vector<int> in(n);
        queue<int> q;
        for(auto& i:edges){
            g[i[0]].push_back(i[1]);
            in[i[1]]++;
        }

        for(int i=0;i<n;i++)
            if(in[i]==0)
                q.push(i);
        
        while(!q.empty()){
            int out=q.front();
            q.pop();
            p++;
            ans=max(ans, ++c[out][colors[out]-'a']);
            for(auto i:g[out]){
                for(int j=0;j<26;j++) c[i][j]=max(c[i][j], c[out][j]);
                if(--in[i]==0) q.push(i);
            }
        }
        if(p!=n) return -1;
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();