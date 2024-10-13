class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> ans;
        int n=nums.size();
        for(int j=0;j<n-k+1;j++){
            unordered_map<int, int> mp;
            vector<pair<int, int>> p;
            for(int i=j;i<j+k;i++)
                mp[nums[i]]++;
            for(auto it:mp)
                p.push_back(it);
            sort(p.begin(), p.end(), [](auto& a, auto& b) {
        return a.second > b.second ? true : a.second == b.second ? a.first > b.first : false;
    });
            int xs=0, c=0;
            for(auto it:p){
                if(c>=x) break;
                xs+=it.first*it.second;
                c++;
            }
            ans.push_back(xs);
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