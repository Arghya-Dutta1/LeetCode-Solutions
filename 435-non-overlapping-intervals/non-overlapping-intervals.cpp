class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& inv) {
        if(inv.size()==0) return 0;
        ranges::sort(inv, [](auto& a, auto& b){return a[1]<b[1];});
        int ans=0, cend=inv[0][1];

        for(int i=1;i<inv.size();i++)
            if(inv[i][0]>=cend) cend=inv[i][1];
            else ans++;
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();