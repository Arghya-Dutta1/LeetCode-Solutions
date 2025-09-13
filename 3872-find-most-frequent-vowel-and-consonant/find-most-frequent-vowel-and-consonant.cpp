class Solution {
public:
    int maxFreqSum(string s) {
        int mv=0, mc=0;
        vector<int> f(26, 0);
        unordered_set<int> v={0, 4, 8, 14, 20};
        for(auto i:s)
            f[i-'a']++;
        for(int i=0;i<26;i++){
            if(v.count(i))
                mv=max(f[i], mv);
            else
                mc=max(f[i], mc);
        }
        return mv+mc;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();