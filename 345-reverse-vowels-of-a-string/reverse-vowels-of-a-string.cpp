class Solution {
public:
    string reverseVowels(string s) {
        vector<char> r;
        string ans="";
        int idx=0;
        unordered_set<char> v={'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
        for(auto i:s)
            if(v.count(i)) r.push_back(i);
        ranges::reverse(r);
        for(auto i:s)
            if(v.count(i))
                ans+=r[idx++];
            else
                ans+=i;
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();