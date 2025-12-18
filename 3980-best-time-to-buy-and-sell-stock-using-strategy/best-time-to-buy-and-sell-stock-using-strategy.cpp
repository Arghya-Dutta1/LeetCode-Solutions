class Solution {
public:
    typedef long long ll;
    ll maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        int n = prices.size();
        ll actualProfit = 0;
        vector<ll> profit(n); 
        for (int i = 0; i < n; i++) {
            profit[i] = (ll)strategy[i] * prices[i];
            actualProfit += profit[i];
        }
        ll originalWindowProfit = 0, modifiedWindowProfit = 0, maxGain = 0; 
        int i = 0, j = 0;
        while (j < n) {
            originalWindowProfit += profit[j];
            if (j - i + 1 > k / 2)
                modifiedWindowProfit += prices[j];
            if (j - i + 1 > k) {
                originalWindowProfit -= profit[i];
                modifiedWindowProfit -= prices[i + k / 2];
                i++;
            }
            if (j - i + 1 == k)
                maxGain = max(maxGain, modifiedWindowProfit - originalWindowProfit);
            j++;
        }
        return actualProfit + maxGain;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();