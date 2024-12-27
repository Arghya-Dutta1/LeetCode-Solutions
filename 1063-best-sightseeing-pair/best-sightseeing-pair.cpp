class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int best=values[0], ans=0;
        for(int j=1;j<values.size();j++){
            ans=max(ans, best+values[j]-j);
            best=max(best, values[j]+j);
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