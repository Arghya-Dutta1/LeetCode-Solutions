class Solution {
public:
    unordered_map<int, int> mp;
    int tribonacci(int n) {
        if(mp.count(n)) return mp[n];
        if(n==0) return 0;
        if(n==1 || n==2) return 1;
        return mp[n]=tribonacci(n-3)+tribonacci(n-2)+tribonacci(n-1);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();