class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int res=0;
        queue<pair<int, int>> q7, q30;

        for(auto d : days) {
            while(!q7.empty() && q7.front().first+7 <= d) q7.pop();
            while(!q30.empty() && q30.front().first+30 <= d) q30.pop();
            q7.push({d, res+costs[1]});
            q30.push({d, res+costs[2]});
            res = min({res+costs[0], q7.front().second, q30.front().second});
        }

        return res;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();