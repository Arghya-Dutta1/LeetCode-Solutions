class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        ranges::sort(potions);
        vector<int> ans;
        int n=potions.size();

        for(auto i:spells){
            int index = lower_bound(potions.begin(), potions.end(), (success + i - 1) / i) - potions.begin();
            ans.push_back(n-index);
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