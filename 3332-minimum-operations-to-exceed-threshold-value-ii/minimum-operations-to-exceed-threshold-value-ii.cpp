using ll = long long;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for(int i:nums)
            pq.push(i);

        int ans=0;
        for(;pq.size()>1 && pq.top()<k; ans++){
            ll x=pq.top();
            pq.pop();
            ll y=pq.top();
            pq.pop();
            pq.push(x*2 + y);
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