class Solution {
public:
    vector<int> assignElements(vector<int>& g, vector<int>& e) {
        int mx = *max_element(g.begin(),g.end());
        vector<set<int>> ind(mx+1);
        for(int i = 0; i<g.size(); i++)
            ind[g[i]].insert(i);
        set<int> did;
        vector<int> ans(g.size(),-1);

        for(int i = 0; i<e.size(); i++)
            if(did.find(e[i]) == did.end()){
                did.insert(e[i]);
                for(int j = e[i]; j<=mx; j+=e[i]){
                    for(int k: ind[j])
                        ans[k] = i;
                    ind[j].clear();
                }
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