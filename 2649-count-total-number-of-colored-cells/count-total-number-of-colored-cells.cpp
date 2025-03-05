class Solution {
public:
    long long coloredCells(int n) {
        long long ans=1;
        int d=0;
        while(n--){
            ans+=d;
            d+=4;
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