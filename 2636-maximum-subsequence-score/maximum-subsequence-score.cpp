class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();

        auto func=[&](auto &v1, auto &v2) {
            return v1.second>v2.second;
        };

        vector<pair<int, int>> v;
        for(int i=0;i<n;i++)
            v.push_back({nums1[i], nums2[i]});
        sort(v.begin(), v.end(), func);

        priority_queue<int, vector<int>, greater<int>> pq;
        long long ksum=0;
        for(int i=0;i<k;i++){
            ksum+=v[i].first;
            pq.push(v[i].first);
        }
        long long ans=ksum*v[k-1].second;
        
        for(int i=k;i<n;i++){
            ksum+=v[i].first-pq.top();
            pq.pop();
            pq.push(v[i].first);

            ans=max(ans, ksum*v[i].second);
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