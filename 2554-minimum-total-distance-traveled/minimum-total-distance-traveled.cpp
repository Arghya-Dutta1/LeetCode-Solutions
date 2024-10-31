class Solution {
public:
    long long minimumTotalDistance(vector<int>& robots, vector<vector<int>>& factories) {
        ranges::sort(robots);
        ranges::sort(factories);
        vector<vector<long long>> mem(robots.size(), vector<long long>(factories.size(), 0));
        function<long long(int, int)> minDist = [&](int i, int j)->long long {
            if (i==robots.size()) return 0;
            if (j==factories.size()) return 1e15;

            if (mem[i][j]!=0) return mem[i][j]; 

            auto ans=minDist(i, j+1);
            long long temp=0;

            for (int k=0; k<factories[j][1]; ++k) {
                if (i+k >= robots.size()) break;
                temp+=abs(robots[i+k]-factories[j][0]);
                ans=min(ans, temp+minDist(i+k+1, j+1));
            }

            mem[i][j] = ans;
            return ans;
        };
        return minDist(0, 0);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();