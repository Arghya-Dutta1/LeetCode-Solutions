class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m=maze.size(), n=maze[0].size();
        vector<pair<int, int>> dirs={{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        vector<vector<bool>> seen(m, vector<bool>(n, false));
        seen[entrance[0]][entrance[1]] = true;
        queue<pair<int, int>> q;
        q.push({entrance[0], entrance[1]});

        for(int step=1;!q.empty();step++){
            for(int sz=q.size();sz>0;sz--){
                auto [i,j]=q.front();
                q.pop();

                for(auto& [dx, dy]:dirs){
                    int x=i+dx, y=j+dy;
                    if(x<0 || x==m || y<0 || y==n)
                        continue;
                    if(seen[x][y] || maze[x][y]=='+')
                        continue;
                    if(x==0 || x==m-1 || y==0 || y==n-1)
                        return step;
                    seen[x][y]=true;
                    q.push({x, y});
                }
            }
        }

        return -1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();