class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<pair<int, int>> a;
        for(int i=0;i<nums.size();i++)
            for(auto j:nums[i])
                a.push_back({j, i});
        ranges::sort(a);
        int mini=1e9, d=nums.size(), t=0, j=0;
        vector<int> ans, mp(d, 0);
        for(int i=0;i<a.size();i++){
            mp[a[i].second]++;
            if(mp[a[i].second]==1) t++;
            if(t==d){
                if(a[i].first-a[j].first+1<mini){
                    mini=a[i].first-a[j].first+1;
                    ans={a[j].first, a[i].first};
                }

                while(t==d){
                    if(mp[a[j].second]>1){
                        mp[a[j].second]--;
                        j++;
                    }
                    else break;
                }

                if(a[i].first-a[j].first+1<mini){
                    mini=a[i].first-a[j].first+1;
                    ans={a[j].first, a[i].first};
                }
            }
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