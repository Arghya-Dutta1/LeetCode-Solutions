class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> pq;
        for(int i=0;i<min((int)nums1.size(), k);i++)
            pq.push({nums2[0]+nums1[i], {i,0}});
        while(ans.size()<k && !pq.empty()){
            auto v=pq.top();
            pq.pop();
            int i1=v.second[0], i2=v.second[1];
            ans.push_back({nums1[i1], nums2[i2]});
            if(i2+1<nums2.size())
                pq.push({nums2[i2+1]+nums1[i1], {i1,i2+1}});
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