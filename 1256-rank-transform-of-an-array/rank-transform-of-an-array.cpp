class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0) return {};
        vector<int> cp(arr.begin(), arr.end()), ans;
        unordered_map<int, int> mp;
        int r=1;
        ranges::sort(cp);
        mp[cp[0]]=r++;
        for(int i=1;i<cp.size();i++)
            if(cp[i]!=cp[i-1])
                mp[cp[i]]=r++;
        for(auto i:arr)
            ans.push_back(mp[i]);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();