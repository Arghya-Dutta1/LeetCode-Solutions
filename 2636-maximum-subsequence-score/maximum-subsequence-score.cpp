class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();
        vector<pair<int, int>> v;
        for(int i=0;i<n;i++)
            v.push_back({nums2[i], nums1[i]});
        sort(v.begin(), v.end(), greater<>());

        priority_queue<int, vector<int>, greater<int>> pq;
        long long ksum=0;
        for(int i=0;i<k;i++){
            ksum+=v[i].second;
            pq.push(v[i].second);
        }
        long long ans=ksum*v[k-1].first;
        
        for(int i=k;i<n;i++){
            ksum+=v[i].second-pq.top();
            pq.pop();
            pq.push(v[i].second);

            ans=max(ans, ksum*v[i].first);
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