class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        vector<vector<int>> remainderCount(k, vector<int>(k, 0));
        int maxLength = 0;
        for (int num : nums) {
            int modValue = num % k;
            for (int remainder = 0; remainder < k; ++remainder) {
                int targetRemainder = (remainder - modValue + k) % k;
                remainderCount[modValue][targetRemainder] =
                    remainderCount[targetRemainder][modValue] + 1;
                maxLength =
                    max(maxLength, remainderCount[modValue][targetRemainder]);
            }
        }
        return maxLength;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();