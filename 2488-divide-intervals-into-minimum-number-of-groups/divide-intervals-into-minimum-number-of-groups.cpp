class Solution {
 public:
    int minGroups(vector<vector<int>>& intervals) {
        priority_queue<int, vector<int>, greater<>> minHeap;
        ranges::sort(intervals);

        for (auto interval:intervals) {
            if (!minHeap.empty() && interval[0] > minHeap.top())
                minHeap.pop();
            minHeap.push(interval[1]);
        }

        return minHeap.size();
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();