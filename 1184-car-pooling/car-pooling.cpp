class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> time(1001, 0);
        for(auto& t:trips){
            time[t[1]]+=t[0];
            time[t[2]]-=t[0];
        }

        int cap=0;
        for(int i:time){
            cap+=i;
            if(cap>capacity)
                return false;
        }
        return true; 
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();