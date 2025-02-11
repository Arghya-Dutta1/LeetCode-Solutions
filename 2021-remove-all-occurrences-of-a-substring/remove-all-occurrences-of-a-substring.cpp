class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t f=s.find(part);
        while(f!=string::npos){
            s.erase(f, part.size());
            f=s.find(part);
        }
        return s;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();