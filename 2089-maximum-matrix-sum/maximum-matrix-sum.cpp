class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long absSum = 0;
        int minAbs = INT_MAX;
        int oddNeg = 0;

        for (const vector<int>& row : matrix)
            for (const int num : row) {
                absSum += abs(num);
                minAbs = min(minAbs, abs(num));
                if (num < 0) oddNeg ^= 1;
            }

        return absSum - oddNeg * minAbs * 2;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();