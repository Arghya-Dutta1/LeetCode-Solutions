class Solution {
public:
    long long putMarbles(vector<int>& wt, int k) {
        vector<int> ps;
        for(int i=0;i<wt.size()-1;i++)
            ps.push_back(wt[i]+wt[i+1]);
        ranges::sort(ps);
        long long mx=accumulate(ps.end()-(k-1),ps.end(),0LL);
        long long mn=accumulate(ps.begin(), ps.begin()+(k-1),0LL);    
        return mx-mn;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();