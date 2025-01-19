class Solution {
public:
    typedef pair<int, pair<int, int>> PP;
    vector<vector<int>> dir={{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

    int trapRainWater(vector<vector<int>>& ht) {
        int m=ht.size(), n=ht[0].size();
        priority_queue<PP, vector<PP>, greater<>> bcells;
        vector<vector<bool>> vis(m, vector<bool>(n, false));

        for(int r=0;r<m;r++)
            for(int c:{0, n-1}){
                bcells.push({ht[r][c], {r,c}});
                vis[r][c]=true;
            }
        
        for(int c=0;c<n;c++)
            for(int r:{0, m-1}){
                bcells.push({ht[r][c], {r,c}});
                vis[r][c]=true;
            }
        
        int water=0;
        while(!bcells.empty()){
            PP p=bcells.top();
            bcells.pop();

            int height=p.first;
            int i=p.second.first, j=p.second.second;

            for(auto& d:dir){
                int i1=i+d[0], j1=j+d[1];

                if(i1>=0 && i1<m && j1>=0 && j1<n && !vis[i1][j1]){
                    water+=max(height-ht[i1][j1], 0);
                    bcells.push({max(height, ht[i1][j1]), {i1, j1}});
                    vis[i1][j1]=true;
                }
            }
        }

        return water;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();