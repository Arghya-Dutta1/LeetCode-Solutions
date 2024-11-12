class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<int> p, ans, b(items.size()+1);
        ranges::sort(items);
        for(auto i:items) p.push_back(i[0]);
        for(int i=0;i<items.size();i++)
            b[i+1]=max(b[i], items[i][1]);
        for(auto q:queries){
            int i=ranges::upper_bound(p, q)-p.begin();
            ans.push_back(b[i]);
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