class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        while(n--){
            rotate(s.begin(), s.begin()+1, s.end());
            if(s==goal) return true;
        }
        return false;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();