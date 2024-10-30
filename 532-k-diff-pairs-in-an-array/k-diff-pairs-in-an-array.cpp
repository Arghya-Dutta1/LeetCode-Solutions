class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_set<int> s;
        set<pair<int, int>> p;

        for(int i:nums){
            if(s.find(i+k)!=s.end()) p.insert({i, i+k});
            if(s.find(i-k)!=s.end()) p.insert({i-k, i});
            s.insert(i);
        }

        return p.size();
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();