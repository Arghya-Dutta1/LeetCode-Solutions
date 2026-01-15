class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        int gap = min(maxContinousGap(hBars), maxContinousGap(vBars));
        return gap * gap;
    }
    int maxContinousGap(vector<int>& bars) {
        int res = 2, runningGap = 2;
        ranges::sort(bars);
        for (int i = 1; i < bars.size(); ++i) {
            runningGap = bars[i] == bars[i - 1] + 1 ? runningGap + 1 : 2;
            res = max(res, runningGap);
        }
        return res;
    }
};