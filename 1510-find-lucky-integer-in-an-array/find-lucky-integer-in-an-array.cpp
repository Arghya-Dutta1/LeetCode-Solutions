class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mp;
        int ans=-1;
        for(auto i:arr) mp[i]++;
        for(auto [i,j]:mp)
            if(i==j)
                ans=max(ans, i);
        return ans;
    }
};