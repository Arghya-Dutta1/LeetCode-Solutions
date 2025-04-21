class Solution {
public:
    int numberOfArrays(vector<int>& diff, int lower, int upper) {
        long long mx=0, mn=0, ps=0;
        for(auto i:diff){
            ps+=i;
            mx=max(mx, ps);
            mn=min(mn, ps);
        }
        return max(0LL, upper-lower+1-mx+mn);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();