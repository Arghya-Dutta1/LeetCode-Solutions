class Solution {
public:
    int canDistribute(vector<int>& qty, int k){
        int t=0;
        for(auto q:qty)
            t+=(q-1)/k+1;
        return t;
    }
    int minimizedMaximum(int n, vector<int>& qty) {
        int l=1, r=ranges::max(qty);
        while(l<r){
            int m=(r+l)/2;
            if(canDistribute(qty, m)<=n)
                r=m;
            else
                l=m+1;
        }
        return l;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();