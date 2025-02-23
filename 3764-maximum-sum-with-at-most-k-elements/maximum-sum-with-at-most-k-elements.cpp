class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        long long c=0, ans=0;
        priority_queue<pair<int, int>> pq;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++)
                pq.push({grid[i][j], i});
        while(c<k){
            auto [e,ind]=pq.top();
            pq.pop();
            if(limits[ind]>0){
                ans+=e;
                c++;
                limits[ind]--;
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