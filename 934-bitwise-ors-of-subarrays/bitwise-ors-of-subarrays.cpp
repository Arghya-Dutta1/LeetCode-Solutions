class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        vector<int> s;
        int l = 0;
        for (const int a : arr) {
            int r = s.size();
            s.push_back(a);
            for (int i = l; i < r; ++i)
                if (s.back() != (s[i] | a))
                    s.push_back(s[i] | a);
            l = r;
        }
        return unordered_set<int>(s.begin(), s.end()).size();
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();