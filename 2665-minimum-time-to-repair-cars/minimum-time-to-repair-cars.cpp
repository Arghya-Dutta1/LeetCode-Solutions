class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long lo=1, hi=1LL*ranks[0]*cars*cars;
        while(lo<hi){
            long long mid=(lo+hi)/2, c=0;
            for(auto r:ranks) c+=sqrt(mid/r);
            if(c>=cars)
                hi=mid;
            else
                lo=mid+1;
        }
        return lo;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();