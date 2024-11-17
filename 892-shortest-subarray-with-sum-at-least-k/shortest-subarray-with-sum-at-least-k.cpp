class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n=nums.size(), ans=n+1;
        deque<int> dq;
        vector<long long> p{0};
        for(int i=0;i<n;i++) p.push_back(p.back() + nums[i]);

        for(int i=0;i<=n;i++){
            while (!dq.empty() && p[i]-p[dq.front()]>=k)
                ans = min(ans, i-dq.front()), dq.pop_front();
            while (!dq.empty() && p[i]<=p[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        return ans<=n?ans:-1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();