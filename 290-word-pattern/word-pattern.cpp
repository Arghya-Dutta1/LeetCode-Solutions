class Solution {
public:
    vector<string> tokenize(string s, string del = " ") {
        vector<string> ans;
        int start, end = -1 * del.size();
        do {
            start = end + del.size();
            end = s.find(del, start);
            ans.push_back(s.substr(start, end - start));
        } while (end != -1);
        return ans;
    }

    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> mc;
        unordered_map<string, int> ms;
        int n=pattern.size();
        vector<string> vs=tokenize(s);
        if(vs.size()!=n) return false;
        for(int i=0;i<n;i++){
            if(mc[pattern[i]]!=ms[vs[i]])
                return false;
            mc[pattern[i]]=i+1;
            ms[vs[i]]=i+1;
        }
        return true;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();