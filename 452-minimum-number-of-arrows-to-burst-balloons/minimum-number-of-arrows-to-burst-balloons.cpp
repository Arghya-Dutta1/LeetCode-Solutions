class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        ranges::sort(points, [](auto& a, auto& b){return a[1]<b[1];});
        int ans=1;
        int arrow=points[0][1];
        for(int i=1;i<points.size();i++)
            if(points[i][0]>arrow){
                arrow=points[i][1];
                ans++;
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