class Solution {
public:
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        ranges::sort(tasks);
        ranges::sort(workers);
        int n = tasks.size(), m = workers.size(), left = 0, right = min(m, n);
        auto check = [&](int x) {
            int p = pills;
            deque<int> q;
            int i = 0;
            for (int j = m - x; j < m; ++j) {
                while (i < x && tasks[i] <= workers[j] + strength) {
                    q.push_back(tasks[i++]);
                }
                if (q.empty()) {
                    return false;
                }
                if (q.front() <= workers[j]) {
                    q.pop_front();
                } else if (p == 0) {
                    return false;
                } else {
                    --p;
                    q.pop_back();
                }
            }
            return true;
        };
        while (left < right) {
            int mid = (left + right + 1) >> 1;
            if (check(mid)) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();