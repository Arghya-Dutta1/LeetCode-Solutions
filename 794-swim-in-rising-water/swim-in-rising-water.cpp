class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int kDirs[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int n = grid.size();
        int ans = grid[0][0];
        using T = tuple<int, int, int>;
        priority_queue<T, vector<T>, greater<>> minHeap;
        vector<vector<bool>> seen(n, vector<bool>(n));

        minHeap.emplace(grid[0][0], 0, 0);
        seen[0][0] = true;

        while (!minHeap.empty()) {
            auto [height, i, j] = minHeap.top();
            minHeap.pop();
            ans = max(ans, height);
            if (i == n - 1 && j == n - 1)
                break;
            for (const auto& [dx, dy] : kDirs) {
                int x = i + dx, y = j + dy;
                if (x < 0 || x == n || y < 0 || y == n)
                    continue;
                if (seen[x][y])
                    continue;
                minHeap.emplace(grid[x][y], x, y);
                seen[x][y] = true;
            }
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