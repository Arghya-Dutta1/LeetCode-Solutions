struct Event {
    int time;
    int value;
    bool isStart;
};

class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        int ans=0, mx=0;
        vector<Event> ev;
        for(auto& i:events){
            int st=i[0], e=i[1], v=i[2];
            ev.emplace_back(st, v, true);
            ev.emplace_back(e+1, v, false);
        }

        ranges::sort(ev, [](auto& a, auto& b){
            return a.time==b.time?a.isStart<b.isStart:a.time<b.time;
        });

        for(auto& [_, v, i]:ev)
            if(i) ans=max(ans, v+mx);
            else mx=max(mx, v);
        
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();