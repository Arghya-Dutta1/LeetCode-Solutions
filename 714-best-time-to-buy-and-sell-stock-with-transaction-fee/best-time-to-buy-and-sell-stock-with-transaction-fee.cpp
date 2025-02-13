class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int s=0, h=INT_MIN;
        for(auto i:prices){
            s=max(s, h+i);
            h=max(h, s-i-fee);
        }
        return s;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();