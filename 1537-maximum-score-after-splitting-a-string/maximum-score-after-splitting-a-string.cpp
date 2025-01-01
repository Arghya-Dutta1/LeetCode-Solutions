class Solution {
public:
    int maxScore(string s) {
        vector<int> p;
        int c=0, ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') c++;
            p.push_back(c);
        }
        for(int i=1;i<s.size();i++){
            int l=i-p[i-1];
            int r=p[s.size()-1]-p[i-1];
            ans=max(ans, r+l);
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