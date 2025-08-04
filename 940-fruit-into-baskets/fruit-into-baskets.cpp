class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans = 0;
        unordered_map<int, int> count;

        for (int l = 0, r = 0; r < fruits.size(); ++r) {
            ++count[fruits[r]];
            while (count.size() > 2) {
                if (--count[fruits[l]] == 0)
                    count.erase(fruits[l]);
                ++l;
            }
            ans = max(ans, r - l + 1);
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