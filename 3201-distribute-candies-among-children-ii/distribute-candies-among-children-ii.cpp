class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long ans=0;
        for(int i=0;i<=min(n,limit);i++)
            ans+=(long long)(max(min(limit, n - i) - max(0, n - i - limit) + 1, 0));
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();