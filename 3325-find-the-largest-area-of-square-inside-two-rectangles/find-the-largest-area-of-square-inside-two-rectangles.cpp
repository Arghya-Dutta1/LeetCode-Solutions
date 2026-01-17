class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        int minSide = 0;
        for (int i = 0; i < bottomLeft.size(); ++i)
            for (int j = i + 1; j < bottomLeft.size(); ++j) {
                int ax1 = bottomLeft[i][0], ay1 = bottomLeft[i][1], ax2 = topRight[i][0], ay2 = topRight[i][1], bx1 = bottomLeft[j][0], by1 = bottomLeft[j][1], bx2 = topRight[j][0], by2 = topRight[j][1], overlapX = min(ax2, bx2) - max(ax1, bx1), overlapY = min(ay2, by2) - max(ay1, by1);
                minSide = max(minSide, min(overlapX, overlapY));
            }

        return static_cast<long>(minSide) * minSide;
    }
};