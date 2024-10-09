class Solution {
public:
    int maxVowels(string s, int k) {
        set<char> st={'a', 'e', 'i', 'o', 'u'};
        int n=s.length(), c=0, ans=0;
        for(int i=0;i<k;i++)
            if(st.count(s[i])) c++;
        ans=max(ans, c);
        if(n==k) return ans;
        for(int i=k;i<n;i++){
            if(st.count(s[i-k])) c--;
            if(st.count(s[i])) c++;
            ans=max(ans, c);
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