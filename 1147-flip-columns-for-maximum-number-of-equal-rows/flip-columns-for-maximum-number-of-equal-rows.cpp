class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int ans=0, m=matrix.size(), n=matrix[0].size();
        unordered_map<string, int> mp;
        for(auto& i:matrix){
            string s="";
            int v=i[0];
            for(int j=0;j<n;j++) s+=(i[j]==v?"S":"B");
            mp[s]++;
        }

        for(auto& it:mp) ans=max(ans, it.second);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();