class Solution {
public:
    unordered_map<string, bool> processed;
    void rotate_str(string& s, int n) {
        rotate(s.begin(), s.begin()+n, s.end());
    }
    void add_str(string& s, int n) {
        for(int i=1; i<s.size(); i+=2)
            s[i] = (s[i] -'0' + n) % 10 +'0';
    }
    string findLexSmallestString(string s, int a, int b) {
        string result = s;
        dfs(s, a, b, result);
        return result;
    }
    void dfs(string& s, int a, int b, string& result) {
        if (processed.find(s) != processed.end()) return;
        processed[s] = true;
        if (s < result) result = s;
        string str = s;
        rotate_str(str, b); 
        dfs(str, a, b, result);
        add_str(str, a); 
        dfs(str, a, b, result);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();