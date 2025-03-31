class Solution {
public:
    long long putMarbles(vector<int>& wt, int k) {
        long long s=0;
        vector<int> ps;
        for(int i=0;i<wt.size()-1;i++)
            ps.push_back(wt[i]+wt[i+1]);
        ranges::sort(ps);
        k--;
        for(int i=0;i<k;i++)
            s-=ps[i];    
        int idx=ps.size()-1;
        while(k--)
            s+=ps[idx--];    
        return s;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();