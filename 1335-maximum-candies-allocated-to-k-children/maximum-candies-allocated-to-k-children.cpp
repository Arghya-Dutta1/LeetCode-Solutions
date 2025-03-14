class Solution {
public:
    long numChildren(const vector<int>& candies, int m){
        return accumulate(candies.begin(), candies.end(), 0L, [&](long subtotal, int c){ return subtotal+c/m; });
    };

    int maximumCandies(vector<int>& candies, long long k){
        int l=1, r=accumulate(candies.begin(), candies.end(), 0L)/k;
        while(l<r){
            int m=(l+r)>>1;
            if(numChildren(candies,m)<k)
                r=m;
            else
                l=m+1;
        }

        return numChildren(candies, l)>=k?l:l-1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();