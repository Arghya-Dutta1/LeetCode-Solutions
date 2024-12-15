class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        map<int, int> mp;
        int last=0, mx=0, idx=0;

        for(auto& i:events){
            mp[i[0]]=max(mp[i[0]], i[1]-last);
            last=i[1];
        }

        for(auto& it:mp)
            if(it.second>mx){
                mx=it.second;
                idx=it.first;
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