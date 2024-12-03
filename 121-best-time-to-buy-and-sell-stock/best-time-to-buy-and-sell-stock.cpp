class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0, l=prices.size()-2, mx=prices[l+1];
        while(l>=0){
            ans=max(ans, mx-prices[l]);
            mx=max(mx, prices[l]);
            l--;
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