class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k) return false;
        vector<int> odd(26, 0);
        for(auto i:s)
            odd[i-'a']++;
        
        int c=0;
        for(auto i:odd)
            if(i%2!=0)
                c++;
        return c<=k;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();