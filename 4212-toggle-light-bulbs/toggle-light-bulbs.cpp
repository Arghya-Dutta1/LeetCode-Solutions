class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> ans;
        map<int, int> mp;
        for(auto i:bulbs)
            mp[i]++;
        for(auto [i,j]:mp)
            if(j%2!=0)
                ans.push_back(i);
        return ans;
    }
};