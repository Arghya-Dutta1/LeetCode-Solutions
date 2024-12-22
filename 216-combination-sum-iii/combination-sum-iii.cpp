class Solution {
public:
    vector<vector<int>> ans;

    void dfs(int k, int n, int s, vector<int>& path){
        if(k==0 && n==0){
            ans.push_back(path);
            return;
        }

        if(k==0 || n<=0) return;

        for(int i=s;i<=9;i++){
            path.push_back(i);
            dfs(k-1, n-i, i+1, path);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> path;
        dfs(k, n, 1, path);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();