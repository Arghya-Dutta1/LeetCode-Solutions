class Solution {
public:
    vector<int> ans;

    void dfs(int i, int n){
        if(i>n) return;
        ans.push_back(i);
        dfs(i*10, n);
        if(i%10!=9)
            dfs(i+1, n);
    }

    vector<int> lexicalOrder(int n) {
        dfs(1,n);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();