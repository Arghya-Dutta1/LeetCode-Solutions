class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        int mnd=INT_MAX, mxd=0, ans=0;
        unordered_map<int, vector<int>> mp;
        for(auto i:events){
            mp[i[0]].push_back(i[1]);
            mnd=min(mnd, i[0]);
            mxd=max(mxd, i[1]);
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=mnd;i<=mxd;i++){
            while(!pq.empty() && pq.top()<i) pq.pop();
            for(auto j:mp[i]) pq.push(j);
            if(!pq.empty()){
                ans++;
                pq.pop();
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