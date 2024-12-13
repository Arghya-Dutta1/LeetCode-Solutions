class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long score=0;
        int idx=0, n=nums.size();
        priority_queue<int, vector<int>, greater<>> pq;
        unordered_map<int, vector<int>> mp;
        vector<bool> m(nums.size(), false);
        for(auto i:nums){
            pq.push(i);
            mp[i].push_back(idx++);
        }
        while(!pq.empty()){
            int top=pq.top();
            idx=mp[top].front();
            mp[top].erase(mp[top].begin());
            if(!m[idx]){
                m[idx]=true;
                if(idx>0) m[idx-1]=true;
                if(idx<n-1) m[idx+1]=true;
                score+=nums[idx];
            }
            pq.pop();
        }
        return score;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();