class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for(int i=0;i<prices.size();i++){
            int j;
            for(j=i+1;j<prices.size();j++)
                if(prices[j]<=prices[i]) break;
            if(j!=prices.size()) prices[i]-=prices[j];
        }
        return prices;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();