class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies,
                   vector<vector<int>>& keys,
                   vector<vector<int>>& containedBoxes,
                   vector<int>& initialBoxes) {
        queue<int> q;
        unordered_set<int> has, took;
        int ans = 0;

        for (auto box : initialBoxes) {
            has.insert(box);
            if (status[box]) {
                q.push(box);
                took.insert(box);
                ans += candies[box];
            }
        }

        while (!q.empty()) {
            int box = q.front();
            q.pop();

            for (auto k : keys[box])
                if (!status[k]) {
                    status[k] = 1;
                    if (has.count(k) && !took.count(k)) {
                        q.push(k);
                        took.insert(k);
                        ans += candies[k];
                    }
                }

            for (auto b : containedBoxes[box]) {
                has.insert(b);
                if (status[b] && !took.count(b)) {
                    q.push(b);
                    took.insert(b);
                    ans += candies[b];
                }
            }
        }

        return ans;
    }
};

static const int __ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();