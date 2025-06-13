class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int mn=INT_MAX;
        ranges::sort(arr);
        map<int, vector<vector<int>>> mp;
        for(int i=1;i<arr.size();i++){
            int dif=arr[i]-arr[i-1];
            mp[dif].push_back({arr[i-1], arr[i]});
            mn=min(mn, dif);
        }
        return mp[mn];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();