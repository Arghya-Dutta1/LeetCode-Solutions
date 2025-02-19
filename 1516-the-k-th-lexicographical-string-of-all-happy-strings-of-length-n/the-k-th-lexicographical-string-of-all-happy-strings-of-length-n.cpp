class Solution {
public:
    vector<string> ans;

    void dfs(string s, int n){
        if(s.size()==n){
            ans.push_back(s);
            return;
        }

        for(auto i:{'a', 'b', 'c'}){
            if(s.size() && s.back()==i) continue;
            s+=i;
            dfs(s, n);
            s.pop_back();
        }
    }

    string getHappyString(int n, int k) {
        dfs("", n);
        return ans.size()>=k?ans[k-1]:"";
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();