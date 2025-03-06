class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> ans, mp(n*n, 0);
        for(auto& i:grid)
            for(auto j:i)
                mp[j-1]++;
        for(int i=0;i<n*n;i++)
            if(mp[i]==2){
                ans.push_back(i+1);
                break;
            }
        for(int i=0;i<n*n;i++)
            if(mp[i]==0){
                ans.push_back(i+1);
                break;
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