class Solution {
public:
    unordered_map<string, unordered_map<string, double>> g;

    double dfs(string src, string dest, unordered_set<string>& vis){
        if(g.find(src)==g.end() || g.find(dest)==g.end()) return -1.0;
        if(src==dest) return 1.0;
        
        vis.insert(src);
        
        for(auto& n:g[src])
            if(vis.find(n.first)==vis.end()){ 
                double product=dfs(n.first, dest, vis);
                if(product!=-1.0) return n.second*product;
            }
        
        return -1.0;
    }

    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<double> ans;
        for(int i=0; i<equations.size(); i++){
            string A=equations[i][0], B=equations[i][1];
            double val=values[i];

            g[A][B]=val;
            g[B][A]=1.0/val;
        }

        for(auto& q:queries){
            unordered_set<string> vis;
            ans.push_back(dfs(q[0], q[1], vis));
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