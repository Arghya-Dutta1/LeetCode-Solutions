class Solution {
public:
    int takeCharacters(string s, int k) {
        int n=s.size(), ans=n;
        vector<int> c(3);
        for(auto i:s) c[i-'a']++;
        if(c[0]<k || c[1]<k || c[2]<k) return -1;
        for(int l=0, r=0; r<n; r++){
            c[s[r]-'a']--;
            while(c[s[r]-'a']<k)
                c[s[l++]-'a']++;
            ans=min(ans, n-(r-l+1));
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