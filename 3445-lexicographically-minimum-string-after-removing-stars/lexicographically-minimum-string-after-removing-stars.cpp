class Solution {
public:
    string clearStars(string s) {
        string ans = s;
        vector<vector<int>> buckets(26);

        for (int i = 0; i < s.length(); ++i){
            if (s[i] == '*') {
                ans[i] = ' ';
                int j = 0;
                while (buckets[j].empty()) ++j;
                ans[buckets[j].back()] = ' ', buckets[j].pop_back();
            }
            else
                buckets[s[i] - 'a'].push_back(i);
        }
        erase(ans, ' ');
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();