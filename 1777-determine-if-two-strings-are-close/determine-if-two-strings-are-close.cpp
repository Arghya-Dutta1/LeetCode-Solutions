class Solution {
public:
    bool closeStrings(string w1, string w2) {
        if(w1.size()!=w2.size()) return false;
        unordered_map<char, int> mp1, mp2;
        string s1,s2;
        vector<int> f1,f2;

        for(auto i:w1) mp1[i]++;
        for(auto i:w2) mp2[i]++;

        for(auto& [c,f]:mp1){
            s1+=c;
            f1.push_back(f);
        }
        for(auto& [c,f]:mp2){
            s2+=c;
            f2.push_back(f);
        }

        ranges::sort(s1);
        ranges::sort(s2);

        if (s1!=s2)
            return false;

        ranges::sort(f1);
        ranges::sort(f2);
        return f1==f2;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();