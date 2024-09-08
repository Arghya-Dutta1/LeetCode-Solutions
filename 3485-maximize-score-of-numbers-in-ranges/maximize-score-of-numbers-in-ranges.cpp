class Solution {
public:
    bool func(long long mid, int d, vector<int>& start){
        long long n=start.size(), m=start[0];
        for(int i=1;i<n;i++){
            if(m+mid<=start[i]+d)
                m=max(m+mid, (long long)start[i]);
            else
                return false;
        }
        return true;
    }
    int maxPossibleScore(vector<int>& start, int d) {
        ranges::sort(start);
        long long l=0, r=d+start[start.size()-1]-start[0], m=0;
        while(l<=r){
            long long mid=(l+r)/2;
            if(func(mid, d, start)){
                m=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }
        return m;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();