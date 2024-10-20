class Solution {
public:
    bool check(vector<int>& f, int k){
        for(auto i:f)
            if(i>=k) return true;
        return false;
    }

    int numberOfSubstrings(string s, int k) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            vector<int> f(26, 0);
            for(int j=i;j<s.size();j++){
                f[s[j]-'a']++;
                if(check(f, k))
                    ans++;
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