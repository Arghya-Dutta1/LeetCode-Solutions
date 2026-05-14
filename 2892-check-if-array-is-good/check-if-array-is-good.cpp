class Solution {
public:
    bool isGood(vector<int>& nums) {
        int kMax = 200, n = nums.size() - 1;
        vector<int> count(kMax + 1);

        for (const int num : nums)
            ++count[num];

        return all_of(count.begin() + 1, count.begin() + n, [](int c) { return c == 1; }) && count[n] == 2;
    }
};