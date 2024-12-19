class Solution {
public:
    vector<bool> vis;

    void dfs(vector<vector<int>>& rooms, int idx){
        if(vis[idx]) return;

        vis[idx]=true;
        for(auto i:rooms[idx]){
            dfs(rooms, i);
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vis.resize(rooms.size(), false);
        dfs(rooms, 0);
        for(auto i:vis) if(!i) return false;
        return true;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();