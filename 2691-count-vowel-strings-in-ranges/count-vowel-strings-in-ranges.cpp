class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size(), c=0, idx=0;
        unordered_set<char> st={'a', 'e', 'i', 'o', 'u'};
        vector<int> ans, p(n,0);
        for(auto w:words){
            int s=w.size();
            c+=(st.count(w[0]) && st.count(w[s-1]));
            p[idx++]=c;
        }

        for(auto q:queries){
            int a=p[q[1]]-(q[0]==0?0:p[q[0]-1]);
            ans.push_back(a);
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