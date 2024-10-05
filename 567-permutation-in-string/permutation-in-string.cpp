class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
    
        int n=s1.size();
        vector<int> f1(26, 0), f2(26, 0);
        for(auto i:s1)
            f1[i-'a']++;
        for(int i=0;i<n;i++)
            f2[s2[i]-'a']++;
        bool ans=true;
        for(int i=0;i<26;i++)
            if(f1[i]!=f2[i]){
                ans=false;
                break;
            }
        if(ans) return ans;
        fill(f2.begin(), f2.end(), 0);
        for(int i=1;i<s2.size()-n+1;i++){
            for(int j=i;j<i+n;j++)
                f2[s2[j]-'a']++;
            ans=true;
            for(int j=0;j<26;j++)
                if(f1[j]!=f2[j]){
                    ans=false;
                    break;
                }
            if(ans) return ans;
            fill(f2.begin(), f2.end(), 0);
        }
        return false;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();