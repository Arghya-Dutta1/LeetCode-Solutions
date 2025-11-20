class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        int ans = 0, mx = -1, secondMax = -1;
        ranges::sort(intervals, ranges::less{},
                     [](const vector<int>& interval) {
                         const int start = interval[0];
                         const int end = interval[1];
                         return pair<int, int>{end, -start};
                     });
        for (auto interval : intervals) {
            int start = interval[0], end = interval[1];
            if (mx >= start && secondMax >= start)
                continue;
            if (mx >= start) {
                secondMax = mx;
                mx = end; 
                ans += 1;
            } else {
                mx = end;      
                secondMax = end - 1;
                ans += 2;
            }
        }
        return ans;
    }
};