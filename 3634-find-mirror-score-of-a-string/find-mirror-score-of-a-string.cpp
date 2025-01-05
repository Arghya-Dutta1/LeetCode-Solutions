class Solution {
public:
    long long calculateScore(string s) {
        long long ans=0;
        int n=s.size();
        vector<set<int>> idx(26);
        vector<char> mir(26);
        
        for(char c='a'; c<='z'; c++) mir[c-'a']='z'-(c-'a');
        for(int i=0; i<n; i++) idx[s[i]-'a'].insert(i);

        for(int i=0; i<n; i++){
            int mc=mir[s[i]-'a']-'a';
            auto it=idx[mc].lower_bound(i);
            if(it!=idx[mc].begin()){
                --it;
                int j=*it;
                ans+=(i-j);
                idx[s[i]-'a'].erase(i);
                idx[mc].erase(j);
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