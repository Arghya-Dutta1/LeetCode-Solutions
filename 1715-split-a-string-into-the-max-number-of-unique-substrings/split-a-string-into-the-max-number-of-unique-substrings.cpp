class Solution {
public:
    unordered_set<string> st;

    void solve(string& s, int idx, int& ans){
        if(idx==s.size()){
            ans=max(ans, (int)st.size());
            return;
        }

        for(int i=1; idx+i<=s.size(); i++){
            string s1=s.substr(idx, i);
            if(st.contains(s1)) continue;
            st.insert(s1);
            solve(s, idx+i, ans);
            st.erase(s1);
        }
    }

    int maxUniqueSplit(string s) {
        int ans=0;
        solve(s, 0, ans);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();