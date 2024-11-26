class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int idx=-1, mx=INT_MIN;
        int n=grid.size();
        for(int i=0;i<n;i++){
            int c=0;
            for(auto j:grid[i]) if(j==1) c++;
            if(c>mx){
                idx=i;
                mx=c;
            }
        }
        return idx;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();